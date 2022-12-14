
#ifndef SCENE_H_
#define SCENE_H_

#include <memory>
#include <vector>

#include "displayStructs.h"
#include "object.h"
#include "lightSource.h"

class Scene {
 public:
  Scene(displayStructs::Viewport viewport, displayStructs::Camera camera,
        std::vector<std::shared_ptr<LightSource>> lightSources,
        std::vector<std::shared_ptr<Object>> objects)
      : viewport(viewport),
        camera(camera),
        lightSources(lightSources),
        objects(objects) {}

  std::vector<unsigned char> display(bool isPerspective);

 private:
  displayStructs::Viewport viewport;
  displayStructs::Camera camera;
  std::vector<std::shared_ptr<LightSource>> lightSources;
  std::vector<std::shared_ptr<Object>> objects;
};
#endif