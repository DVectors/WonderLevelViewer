#ifndef YAMLPARSER_H
#define YAMLPARSER_H

#include "yaml-cpp/yaml.h"

namespace yml
{
    class YamlParser
    {
    public:
        YAML::Node loadLevelFromYaml(std::string levelFile);
    };
}

#endif // YAMLPARSER_H
