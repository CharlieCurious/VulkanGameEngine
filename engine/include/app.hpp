#pragma once

#include <pipeline.hpp>
#include <window.hpp>
#include <device.hpp>

namespace engine {
    class App {

        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;

        void run();

        private:
            Window window{WIDTH, HEIGHT, "Hello Vulkan!"};
            Device device{window};
            Pipeline pipeline{
                device, 
                "shaders/bin/simple_shader.vert.spv", 
                "shaders/bin/simple_shader.frag.spv",
                Pipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)
            };
    };
}
