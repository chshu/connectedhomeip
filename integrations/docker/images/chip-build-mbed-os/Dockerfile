ARG VERSION=latest
FROM connectedhomeip/chip-build:${VERSION}

# ------------------------------------------------------------------------------
# Install system tools via apt
RUN set -x \
    && apt-get update \
    && DEBIAN_FRONTEND=noninteractive apt-get install -fy \
    python3-setuptools \
    python3-usb \
    software-properties-common \
    build-essential \
    astyle \
    mercurial \
    && rm -rf /var/lib/apt/lists \
    && : # last line

# ------------------------------------------------------------------------------
# Install Mbed-OS sources
RUN set -x \
    && (mkdir -p /opt/mbed-os \
    && cd /opt/mbed-os \
    && wget --progress=dot:giga https://github.com/ARMmbed/mbed-os/archive/mbed-os-6.7.0.tar.gz \
    && tar --strip-components=1 -xzf mbed-os-6.7.0.tar.gz \
    && rm mbed-os-6.7.0.tar.gz) \
    && : # last line

# ------------------------------------------------------------------------------
# Install Python modules
RUN set -x \
    && pip3 install --no-cache-dir -U mbed-cli mbed-tools \
    && pip3 install --no-cache-dir -r /opt/mbed-os/requirements.txt \
    && : # last line

# ------------------------------------------------------------------------------
# Install ARM Toolchain (gcc-arm-none-eabi-9-2019-q4)
RUN set -x \
    && (mkdir -p /opt/mbed-os-toolchain \
    && cd /opt/mbed-os-toolchain \
    && wget --progress=dot:giga https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2019q4/RC2.1/gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2 \
    && tar -xjf gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2 \
    && rm gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2 \
    && : ) # last line

# ------------------------------------------------------------------------------
# Configure mbed build system
RUN set -x \
    && mbed config -G GCC_ARM_PATH /opt/mbed-os-toolchain/gcc-arm-none-eabi-9-2019-q4-major/bin/ \
    && mbed toolchain -G -s GCC_ARM \
    && : # last line

# ------------------------------------------------------------------------------
# Install openocd
RUN set -x \
    && (mkdir -p /opt/openocd \
    && cd /opt/openocd \
    && wget --progress=dot:giga https://github.com/cypresssemiconductorco/openocd/releases/download/release-v4.2.0/openocd-4.2.0.1430-linux.tar.gz \
    && tar --strip-components=1 -xzf openocd-4.2.0.1430-linux.tar.gz \
    && rm openocd-4.2.0.1430-linux.tar.gz) \
    && : # last line

# ------------------------------------------------------------------------------
# Configure environment variables
ENV MBED_GCC_ARM_PATH=/opt/mbed-os-toolchain/gcc-arm-none-eabi-9-2019-q4-major/bin/
ENV MBED_OS_PATH=/opt/mbed-os/
ENV OPENOCD_PATH=/opt/openocd/

ENV PATH="${PATH}:${MBED_GCC_ARM_PATH}:${OPENOCD_PATH}/bin"
