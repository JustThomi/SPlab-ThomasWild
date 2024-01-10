#include "ImageLoaderFactory.hpp"
#include "BmpImageLoader.hpp"
#include "JpgImageLoader.hpp"


ImageLoaderFactory::ImageLoaderFactory(){}

ImageLoaderFactory::~ImageLoaderFactory(){}

void ImageLoaderFactory::create(std::string ImageContent){
    ImageLoader* loader = new JpgImageLoader();
    loader->load(ImageContent);
}
