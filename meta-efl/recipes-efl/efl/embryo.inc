DESCRIPTION = "The Enlightenment C-like scripting language for Edje"

inherit efl

LICENSE = "MIT BSD CompuPhase"
LIC_FILES_CHKSUM = "file://COPYING;md5=220a7f1107df42c62428d8ebe559ed14"

BBCLASSEXTEND = "native"
INC_PR = "r1"

DEPENDS += "eina"

# Some upgrade path tweaking
AUTO_LIBNAME_PKGS = ""

RREPLACES_${PN} = "libembryo-ver-pre-svn-00-0 libembryo-ver-pre-svn-01-0"

RREPLACES_${PN}-tests = "libembryo-ver-pre-svn-00-tests libembryo-ver-pre-svn-01-tests"

