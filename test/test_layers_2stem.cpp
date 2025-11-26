#include "model.hpp"
#include <gtest/gtest.h>

TEST(DemucsCPPLayers, Load2StemModel)
{
    struct demucscpp::demucs_model model;
    std::string model_file = "ggml-demucs/ggml-model-htdemucs_2s-f16.bin";
    auto ret = load_demucs_model(model_file, &model);
    EXPECT_TRUE(ret);
    EXPECT_EQ(model.n_sources, 2);
}
