load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])



cc_binary(
    name = "libcontrol_component.so",
    linkshared = True,
    linkstatic = False,
    deps = [":control_component_lib"],
)

cc_library(
    name = "control_component_lib",
    srcs = ["control_component.cc"],
    hdrs = ["control_component.h"],
    copts = ['-DMODULE_NAME=\\"control\\"'],
    deps = [
        "//cyber",
        "//modules/canbus/proto:chassis_cc_proto",
        "//modules/common/time",
        "//modules/common/util:message_util",
        "//modules/control/common:control_gflags",
        "//modules/control/proto:control_cmd_cc_proto",
        "//modules/control/proto:control_conf_cc_proto",
        "//modules/drivers/proto:magnetic_cc_proto",
        "//modules/drivers/proto:rfid_cc_proto",
        "//modules/drivers/proto:wheelangle_cc_proto",
        "//modules/drivers/proto:parking_cc_proto",
        "//modules/common/adapters:adapter_gflags",
        "@com_github_gflags_gflags//:gflags",
    ],
)


cpplint()
