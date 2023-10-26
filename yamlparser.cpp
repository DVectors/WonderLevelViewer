#include "yamlparser.h"

YAML::Node yml::YamlParser::loadLevelFromYaml(std::string levelFile)
{
    return YAML::LoadFile(levelFile);
}
