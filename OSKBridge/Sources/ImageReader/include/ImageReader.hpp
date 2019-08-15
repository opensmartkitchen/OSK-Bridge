#ifndef ImageReader_hpp
#define ImageReader_hpp

#ifdef __cplusplus
extern "C" {
#endif

    const void *initialize(char *filename);
    const char *hexdump(const void *object);
    const char *imageType(const void *object);

#ifdef __cplusplus
}
#endif

#endif /* ImageReader_hpp */
