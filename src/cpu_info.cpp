#include <cpu_info.h>

std::string cpu_info::ModelName() {
    std::ifstream cpuinfo("/proc/cpuinfo");
    std::string line;

    if (!cpuinfo.is_open()) {
        std::cerr << "unable to open /proc/cpuinfo" << std::endl;
        return "Unknown CPU";
    }

    while (std::getline(cpuinfo, line)) {
        if (line.find("model name") != std::string::npos) {
            return line.substr(line.find(":") + 2); // text after ": "
        }
    }
    return "Unknown CPU";
}
