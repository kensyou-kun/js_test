

  jpeg_set_defaults(&jpeg);

  bitmapData->width = width;

    return -1;

  if(bitmapData->data == NULL){

    printf("%sは開けません\n", filename);

    free(bitmap->data);

  FILE *fo;

  png_structp png;

    printf("data malloc error\n");



  jpeg.image_width = bitmapData->width;

  png_set_rows(png, info, datap);





  unsigned int readSize;



  struct jpeg_compress_struct jpeg;

  if(fi == NULL){

  if(fo == NULL){

    type = PNG_COLOR_TYPE_RGB;



  return 0;

  }

  for (j = 0; j < jpeg.image_height; j++ ) {





  jpeg_stdio_dest(&jpeg, fo);



int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){



  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  jpeg_finish_compress(&jpeg);

  png_byte type;

  height = png_get_image_height(png, info);

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  bitmapData->width = width;

    png_destroy_read_struct(&png, &info, NULL);

    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);

  jpeg_stdio_dest(&jpeg, fo);

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  png_init_io(png, fo);

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  for(j = 0; j < bitmapData->height; j++){

    printf("%sは開けません\n", filename);



    jpeg_destroy_decompress(&jpeg);



  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);







  }

    return -1;

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  FILE *fi;

  bitmapData->height = height;

    fclose(fi);





  FILE *fi;

    return -1;

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);



  png_bytepp datap;

  jpeg_start_decompress(&jpeg);



  jpeg_finish_compress(&jpeg);

    png_destroy_write_struct(&png, &info);

  }

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  bitmapData->height = height;





  jpeg_start_decompress(&jpeg);

    fclose(fi);

  FILE *fi;

int freeBitmapData(BITMAPDATA_t *bitmap){

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

    fclose(fi);

  for(j = 0; j < bitmapData->height; j++){



  FILE *fi;

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

  }

    return -1;

    return -1;

  png_bytepp datap;

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

    printf("%sは開けません\n", filename);

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  png_destroy_read_struct(&png, &info, NULL);

    fclose(fi);

  type = png_get_color_type(png, info);

  struct jpeg_error_mgr err;



  jpeg.image_width = bitmapData->width;

    type = PNG_COLOR_TYPE_RGB;

    type = PNG_COLOR_TYPE_RGB_ALPHA;

    printf("png_create_read_struct error!\n");

}



    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

    bitmapData->ch = 3;



  readSize = fread(signature, 1, SIGNATURE_NUM, fi);



  if(fi == NULL){

  png_byte signature[8];

  JSAMPLE *address;

}

  if(info == NULL){

    free(bitmap->data);



    jpeg_destroy_compress(&jpeg);

    fclose(fi);

    printf("data malloc error\n");



  info = png_create_info_struct(png);

}

  for(j = 0; j < bitmapData->height; j++){







  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){





    return -1;



  datap = png_get_rows(png, info);

  jpeg.err = jpeg_std_error(&err);

  jpeg.err = jpeg_std_error(&err);



  jpeg_set_defaults(&jpeg);

  png_init_io(png, fo);

  }



  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    fclose(fi);

    printf("png_create_read_struct error!\n");



  if(bitmapData->ch == 3) {

    printf("%sは開けません\n", filename);

  type = png_get_color_type(png, info);

    fclose(fi);



    printf("%sは開けません\n", filename);

  fclose(fi);



    fclose(fi);

    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);

    return -1;

  png_bytepp datap;



  jpeg.in_color_space = JCS_RGB;

  }

  png_init_io(png, fo);

  struct jpeg_decompress_struct jpeg;

  jpeg_set_quality(&jpeg, 50, TRUE);

    fclose(fi);

  jpeg_finish_compress(&jpeg);

    printf("%sは開けません\n", filename);



}

  bitmapData->data =

  }

  jpeg_stdio_dest(&jpeg, fo);

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  png_init_io(png, fo);



  jpeg_read_header(&jpeg, TRUE);

    jpeg_destroy_decompress(&jpeg);



    png_destroy_read_struct(&png, &info, NULL);

  jpeg_start_compress(&jpeg, TRUE);

  fclose(fi);

    printf("%sは開けません\n", filename);

  }

}

  jpeg_destroy_compress(&jpeg);

  for(j = 0; j < jpeg.output_height; j++){





int freeBitmapData(BITMAPDATA_t *bitmap){

    bitmapData->ch = 4;

  bitmapData->height = jpeg.output_height;

  png_byte signature[8];



  }

  png_structp png;

  if(bitmap->data != NULL){

  png_destroy_write_struct(&png, &info);

  }

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);





  jpeg_read_header(&jpeg, TRUE);



    printf("%sは開けません\n", filename);

  info = png_create_info_struct(png);

  }

  free(bitmap->data);

  jpeg.input_components = bitmapData->ch;

    jpeg_read_scanlines(&jpeg, &tmp, 1);

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);



  type = png_get_color_type(png, info);

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  height = png_get_image_height(png, info);

  bitmapData->width = jpeg.output_width;

  }

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  if(bitmapData->ch == 3) {

}

  png_destroy_write_struct(&png, &info);

  FILE *fo;

  }

  jpeg_finish_compress(&jpeg);

  }

  jpeg_finish_decompress(&jpeg);

}

  bitmapData->width = width;

  jpeg.input_components = bitmapData->ch;

  datap = png_get_rows(png, info);

    printf("%sは開けません\n", filename);

  FILE *fi;



  if(info == NULL){



  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);



  jpeg_destroy_decompress(&jpeg);

  png_infop info;

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);



  jpeg.image_width = bitmapData->width;



    jpeg_write_scanlines(&jpeg, &address, 1);

  png_init_io(png, fo);

    png_destroy_read_struct(&png, &info, NULL);

    return -1;

  JSAMPLE *address;

    return -1;

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  if(info == NULL){

  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);

  }



  jpeg.image_height = bitmapData->height;

  png_destroy_write_struct(&png, &info);

    jpeg_read_scanlines(&jpeg, &tmp, 1);

  png_bytepp datap;



    printf("png_sig_cmp error!\n");

  fclose(fo);

    png_destroy_read_struct(&png, &info, NULL);





int freeBitmapData(BITMAPDATA_t *bitmap){



  width = png_get_image_width(png, info);

  bitmapData->height = height;

  bitmapData->data =

  }

}



}

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  struct jpeg_error_mgr err;

  if(fo == NULL){

  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){

    png_destroy_read_struct(&png, &info, NULL);



  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);



  }

int freeBitmapData(BITMAPDATA_t *bitmap){

  FILE *fo;

    printf("data malloc error\n");

    bitmap->data = NULL;



    return -1;

    return -1;

  jpeg_destroy_compress(&jpeg);

  png_structp png;



  if(bitmapData->ch == 3) {



    type = PNG_COLOR_TYPE_RGB;



    bitmap->data = NULL;

  png_init_io(png, fo);



  jpeg_create_decompress(&jpeg);

    png_destroy_read_struct(&png, &info, NULL);

    return -1;

  if(info == NULL){

}

  bitmapData->width = width;

  jpeg.input_components = bitmapData->ch;

  if(info == NULL){



  int j;



    fclose(fi);



    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);

  if(png == NULL){

    printf("png_crete_info_struct error!\n");

  if(bitmapData->data == NULL){

    jpeg_read_scanlines(&jpeg, &tmp, 1);

  struct jpeg_error_mgr err;

  return 0;







  info = png_create_info_struct(png);

    fclose(fi);

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  FILE *fo;

  jpeg.image_height = bitmapData->height;

  jpeg_read_header(&jpeg, TRUE);

  }





  type = png_get_color_type(png, info);

  for (j = 0; j < jpeg.image_height; j++ ) {

  }

  return 0;

  fclose(fo);

  }

  jpeg.err = jpeg_std_error(&err);

    fclose(fi);

  }

  }



    png_destroy_read_struct(&png, &info, NULL);

  if(fo == NULL){

  } else if(type == PNG_COLOR_TYPE_RGBA) {

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

    printf("%sは開けません\n", filename);



  if(fo == NULL){

  fo = fopen(filename, "wb");



  png_structp png;

  if(fo == NULL){





  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    fclose(fi);



}

    png_destroy_read_struct(&png, NULL, NULL);

  }

}

  jpeg_create_decompress(&jpeg);

}
  return 0;

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  return 0;

  fo = fopen(filename, "wb");

    return -1;

  }

  }

  jpeg_set_defaults(&jpeg);

    fclose(fi);

  fclose(fo);

    png_destroy_write_struct(&png, &info);

  png_destroy_read_struct(&png, &info, NULL);



  }

  if(fo == NULL){

  JSAMPLE *address;



  if(png == NULL){

    png_destroy_write_struct(&png, &info);



  for(j = 0; j < jpeg.output_height; j++){

  return 0;



    jpeg_read_scanlines(&jpeg, &tmp, 1);





  if(fi == NULL){





  bitmapData->width = jpeg.output_width;

  } else {

  FILE *fo;



}

  jpeg_finish_decompress(&jpeg);

    bitmapData->ch = 3;

  bitmapData->width = jpeg.output_width;





  unsigned int width, height;

  png_destroy_read_struct(&png, &info, NULL);





  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);



  png_destroy_read_struct(&png, &info, NULL);



  bitmapData->height = jpeg.output_height;

    free(bitmap->data);

    bitmapData->ch = 3;

  if(png == NULL){

  if(bitmap->data != NULL){

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

  png_infop info;

  png_set_rows(png, info, datap);



    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  info = png_create_info_struct(png);

  }

  png_bytepp datap;

    return -1;

  jpeg_destroy_compress(&jpeg);

  jpeg_stdio_src(&jpeg, fi);

  return 0;

    printf("%sは開けません\n", filename);

    fclose(fi);

    return -1;

  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){



  fo = fopen(filename, "wb");

  png_bytepp datap;

  png_bytepp datap;

    png_free(png, datap[j]);

  jpeg_stdio_src(&jpeg, fi);

  for (j = 0; j < jpeg.image_height; j++ ) {

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  FILE *fo;

  for(j = 0; j < bitmapData->height; j++){

  jpeg_finish_decompress(&jpeg);

    return -1;

  return 0;

  if(fo == NULL){

    return -1;

  png_destroy_read_struct(&png, &info, NULL);

    return -1;

    png_destroy_write_struct(&png, &info);

  png_byte signature[8];

    return -1;



    return -1;

    png_destroy_read_struct(&png, &info, NULL);

    printf("data malloc error\n");

  jpeg.in_color_space = JCS_RGB;

  jpeg_read_header(&jpeg, TRUE);

  jpeg.err = jpeg_std_error(&err);





  int j;

    return -1;

  }

}


  fi = fopen(filename, "rb");

  fi = fopen(filename, "rb");

  }



    return -1;

  bitmapData->height = height;

  if(bitmap->data != NULL){

  type = png_get_color_type(png, info);

  }

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);



  jpeg_read_header(&jpeg, TRUE);

  datap = png_get_rows(png, info);

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  info = png_create_info_struct(png);

    fclose(fi);

  }



  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  }

  bitmapData->width = jpeg.output_width;



    return -1;

    fclose(fi);

  if(info == NULL){

  return 0;

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

    fclose(fi);



  png_byte signature[8];



  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  bitmapData->height = jpeg.output_height;



  for(j = 0; j < jpeg.output_height; j++){

}

  }

  struct jpeg_error_mgr err;

  }

  png_free(png, datap);





  jpeg_stdio_dest(&jpeg, fo);

  info = png_create_info_struct(png);



    fclose(fo);

  if(type == PNG_COLOR_TYPE_RGB) {



}



    return -1;

    fclose(fo);



    printf("%sは開けません\n", filename);





  datap = png_get_rows(png, info);

  if(bitmapData->data == NULL){

  jpeg_finish_decompress(&jpeg);

  jpeg_destroy_compress(&jpeg);



  fo = fopen(filename, "wb");

    printf("png_sig_cmp error!\n");

int freeBitmapData(BITMAPDATA_t *bitmap){

  }



  png_byte type;



    return -1;

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

    return -1;

  } else if(type == PNG_COLOR_TYPE_RGBA) {

    jpeg_destroy_compress(&jpeg);



  }

  struct jpeg_error_mgr err;

  bitmapData->data =

    bitmapData->ch = 3;

  jpeg_set_quality(&jpeg, 50, TRUE);



    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  FILE *fi;

  if(bitmapData->data == NULL){

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);



}
  unsigned int readSize;

    fclose(fo);





    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

    png_destroy_read_struct(&png, &info, NULL);

  jpeg.err = jpeg_std_error(&err);



  }

  jpeg_stdio_dest(&jpeg, fo);

  png_bytepp datap;



    png_destroy_read_struct(&png, NULL, NULL);

  jpeg_start_decompress(&jpeg);

    printf("color type is not RGB or RGBA\n");

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  } else if(type == PNG_COLOR_TYPE_RGBA) {

  png_byte signature[8];

  unsigned int readSize;



    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  fo = fopen(filename, "wb");

  fclose(fi);

    jpeg_destroy_compress(&jpeg);





  fclose(fi);



  return 0;

  jpeg.err = jpeg_std_error(&err);

  if(fi == NULL){

    printf("%sは開けません\n", filename);



    fclose(fi);

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  }

  }

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  }



  int j;

  png_structp png;

  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);





  if(bitmapData->data == NULL){

  if(png == NULL){

  jpeg_destroy_compress(&jpeg);

  return 0;

  jpeg_destroy_decompress(&jpeg);

  png_bytepp datap;







    png_destroy_read_struct(&png, NULL, NULL);

  fclose(fo);

    fclose(fo);

  type = png_get_color_type(png, info);

  FILE *fo;

  }

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  struct jpeg_error_mgr err;





  return 0;

    return -1;

  for(j = 0; j < bitmapData->height; j++){

  int j;

  if(fo == NULL){

  }

  struct jpeg_error_mgr err;

  fi = fopen(filename, "rb");



    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

    fclose(fi);



  }



  if(bitmapData->data == NULL){

int freeBitmapData(BITMAPDATA_t *bitmap){

  jpeg_set_quality(&jpeg, 50, TRUE);

  bitmapData->height = height;

    bitmap->data = NULL;



    return -1;

  if(fo == NULL){

  }

  png_byte signature[8];





  bitmapData->height = height;

  jpeg_finish_decompress(&jpeg);



  }

  jpeg_destroy_decompress(&jpeg);

  jpeg_start_decompress(&jpeg);

  jpeg.image_width = bitmapData->width;

    return -1;

    fclose(fo);

  }

    return -1;

    bitmapData->ch = 4;

  FILE *fo;

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);



  jpeg_set_quality(&jpeg, 50, TRUE);

  unsigned int readSize;



  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  type = png_get_color_type(png, info);

  for(j = 0; j < jpeg.output_height; j++){

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  jpeg.in_color_space = JCS_RGB;

  FILE *fi;

  int j;

    return -1;





  type = png_get_color_type(png, info);

}

    printf("data malloc error\n");

  return 0;

  struct jpeg_error_mgr err;

  unsigned int width, height;

  }

}

  png_destroy_read_struct(&png, &info, NULL);

  if(bitmap->data != NULL){

  JSAMPLE *address;

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  }



  if(bitmapData->ch == 3) {

    return -1;

  if(bitmapData->ch == 3) {

  JSAMPLE *address;



  if(type == PNG_COLOR_TYPE_RGB) {

  fi = fopen(filename, "rb");



    fclose(fi);

    return -1;



  if(bitmap->data != NULL){

    printf("ch num is invalid!\n");

    fclose(fi);



  JSAMPLE *address;



    jpeg_write_scanlines(&jpeg, &address, 1);

  if(fi == NULL){

  FILE *fi;

  JSAMPLE *tmp;

  for(j = 0; j < bitmapData->height; j++){

  for(j = 0; j < bitmapData->height; j++){



    printf("png_sig_cmp error!\n");

  fclose(fi);

  if(png == NULL){

  }

  return 0;

    printf("%sは開けません\n", filename);



  jpeg_read_header(&jpeg, TRUE);



    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);





}



    fclose(fi);

  jpeg_stdio_dest(&jpeg, fo);

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);





    free(bitmap->data);

  jpeg_create_decompress(&jpeg);



  }

  jpeg_destroy_compress(&jpeg);

    png_destroy_read_struct(&png, &info, NULL);

  bitmapData->height = height;

  int j;

    printf("data malloc error\n");

  fi = fopen(filename, "rb");

}



    png_destroy_read_struct(&png, &info, NULL);

  struct jpeg_error_mgr err;

  png_byte type;

    bitmapData->ch = 3;

    fclose(fi);

    printf("color type is not RGB or RGBA\n");



  }

  }

  png_structp png;

    png_destroy_read_struct(&png, NULL, NULL);

  } else {



    fclose(fi);

  fo = fopen(filename, "wb");

    return -1;

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  jpeg_destroy_compress(&jpeg);

  png_set_sig_bytes(png, readSize);

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  png_infop info;

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    return -1;



    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  if(png == NULL){

  png_bytepp datap;

  int j;

  jpeg.err = jpeg_std_error(&err);



  return 0;

    fclose(fi);

    printf("data malloc error\n");

  jpeg_set_defaults(&jpeg);

  for(j = 0; j < bitmapData->height; j++){





  }





    type = PNG_COLOR_TYPE_RGB_ALPHA;



  png_destroy_write_struct(&png, &info);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);



    printf("png_crete_info_struct error!\n");

  png_infop info;

  int j;

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

  bitmapData->height = height;



int freeBitmapData(BITMAPDATA_t *bitmap){

  }



    printf("color type is not RGB or RGBA\n");



  png_byte type;

  png_destroy_write_struct(&png, &info);

  type = png_get_color_type(png, info);

  jpeg_create_decompress(&jpeg);



}

  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);

  }

  JSAMPLE *address;

  for(j = 0; j < jpeg.output_height; j++){

  png_bytepp datap;

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);





  if(fo == NULL){

  free(bitmap->data);







  jpeg.image_width = bitmapData->width;

  }

  bitmapData->ch = jpeg.out_color_components;

  } else if(bitmapData->ch == 4) {

    png_destroy_read_struct(&png, NULL, NULL);

  info = png_create_info_struct(png);



  fi = fopen(filename, "rb");

  FILE *fo;

    printf("data malloc error\n");

    bitmapData->ch = 3;

  return 0;

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  for(j = 0; j < jpeg.output_height; j++){

  struct jpeg_compress_struct jpeg;

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  if(fi == NULL){

  png_structp png;



    return -1;

  if(fo == NULL){

    printf("data malloc error\n");



  height = png_get_image_height(png, info);

  jpeg_stdio_src(&jpeg, fi);

  JSAMPLE *address;

  FILE *fi;

    printf("%sは開けません\n", filename);

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  for(j = 0; j < bitmapData->height; j++){

    fclose(fi);



  datap = png_get_rows(png, info);

  fo = fopen(filename, "wb");



  info = png_create_info_struct(png);

  if(bitmapData->data == NULL){

    type = PNG_COLOR_TYPE_RGB_ALPHA;



  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  png_structp png;

  bitmapData->ch = jpeg.out_color_components;



  png_structp png;

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  fo = fopen(filename, "wb");

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

  free(bitmap->data);

  FILE *fi;



  }







  } else if(bitmapData->ch == 4) {

  JSAMPLE *address;

  jpeg.input_components = bitmapData->ch;



    bitmapData->ch = 4;

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);





  png_byte type;



  }

    return -1;



  for(j = 0; j < bitmapData->height; j++){



  }

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){





  png_init_io(png, fo);

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  if(fi == NULL){

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);



  return 0;

    printf("png_create_read_struct error!\n");

  FILE *fi;

    return -1;

  info = png_create_info_struct(png);

    return -1;

    fclose(fo);

  bitmapData->height = height;

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){



int freeBitmapData(BITMAPDATA_t *bitmap){

  jpeg_destroy_decompress(&jpeg);

  if(bitmap->data != NULL){

  fi = fopen(filename, "rb");

  if(bitmapData->ch == 3) {

    png_destroy_write_struct(&png, &info);

}



  for(j = 0; j < bitmapData->height; j++){

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  for(j = 0; j < bitmapData->height; j++){

    png_destroy_read_struct(&png, &info, NULL);

    jpeg_destroy_compress(&jpeg);

}



    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);



    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

    type = PNG_COLOR_TYPE_RGB_ALPHA;



    fclose(fi);

  return 0;



  return 0;

  for(j = 0; j < jpeg.output_height; j++){



int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  if(bitmapData->data == NULL){

  struct jpeg_compress_struct jpeg;







    jpeg_read_scanlines(&jpeg, &tmp, 1);

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);



  if(bitmapData->ch == 3) {

  fclose(fi);

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  info = png_create_info_struct(png);

  bitmapData->height = height;

    png_destroy_read_struct(&png, &info, NULL);

    printf("png_create_read_struct error!\n");

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    png_destroy_read_struct(&png, &info, NULL);

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

}

    bitmapData->ch = 4;





  struct jpeg_decompress_struct jpeg;

    return -1;

  jpeg_set_quality(&jpeg, 50, TRUE);

  }

  jpeg_create_compress(&jpeg);

    fclose(fi);





    fclose(fi);





    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);

  }

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  fclose(fi);

    fclose(fi);



    jpeg_destroy_decompress(&jpeg);

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

}





  png_destroy_read_struct(&png, &info, NULL);

    return -1;

  if(info == NULL){

  struct jpeg_decompress_struct jpeg;

  struct jpeg_decompress_struct jpeg;

  } else {

  info = png_create_info_struct(png);

  return 0;





int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    fclose(fi);



  }





  }

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    printf("%sは開けません\n", filename);

  }



    bitmapData->ch = 3;

  struct jpeg_error_mgr err;

  FILE *fi;

  if(info == NULL){

  int j;

  }

  }

  if(png == NULL){

  fo = fopen(filename, "wb");



  jpeg_finish_decompress(&jpeg);





    printf("ch num is invalid!\n");



  png_byte type;

  }

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  jpeg.image_width = bitmapData->width;

  jpeg_start_decompress(&jpeg);

int freeBitmapData(BITMAPDATA_t *bitmap){



  }

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

    return -1;

    fclose(fi);

    printf("png_create_read_struct error!\n");

  bitmapData->width = width;

  png_byte type;

    printf("%sは開けません\n", filename);

  png_destroy_read_struct(&png, &info, NULL);

  bitmapData->data =



  if(info == NULL){



  info = png_create_info_struct(png);

  fclose(fi);

  }

  jpeg.in_color_space = JCS_RGB;

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  return 0;

  }

    fclose(fi);

  jpeg_stdio_dest(&jpeg, fo);

  unsigned int width, height;



    printf("png_crete_info_struct error!\n");



    fclose(fi);

  jpeg_destroy_decompress(&jpeg);



  for (j = 0; j < jpeg.image_height; j++ ) {



  png_destroy_write_struct(&png, &info);

  FILE *fo;



    return -1;

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  type = png_get_color_type(png, info);

int freeBitmapData(BITMAPDATA_t *bitmap){

  jpeg_read_header(&jpeg, TRUE);

  return 0;

    type = PNG_COLOR_TYPE_RGB_ALPHA;

  png_infop info;

  JSAMPLE *address;

    return -1;

  }

  return 0;

    bitmap->data = NULL;

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);



  width = png_get_image_width(png, info);

  for(j = 0; j < bitmapData->height; j++){



int freeBitmapData(BITMAPDATA_t *bitmap){

  for(j = 0; j < bitmapData->height; j++){

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){





  fclose(fi);



    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);



  jpeg.image_width = bitmapData->width;



  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  if(type == PNG_COLOR_TYPE_RGB) {

  bitmapData->width = jpeg.output_width;

    printf("%sは開けません\n", filename);

  if(type == PNG_COLOR_TYPE_RGB) {

  FILE *fo;

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  jpeg.in_color_space = JCS_RGB;

  }

  fo = fopen(filename, "wb");

  if(bitmap->data != NULL){

  for(j = 0; j < bitmapData->height; j++){

    fclose(fi);

  struct jpeg_error_mgr err;

  jpeg_destroy_compress(&jpeg);

  JSAMPLE *address;



  }

  if(fi == NULL){

  info = png_create_info_struct(png);

  if(bitmapData->data == NULL){

    return -1;

  png_destroy_read_struct(&png, &info, NULL);

  if(fo == NULL){



    fclose(fi);

  int j;

  png_bytepp datap;

    png_destroy_write_struct(&png, &info);

    bitmap->data = NULL;

  fo = fopen(filename, "wb");







  }

  } else {

  }



  fo = fopen(filename, "wb");

    jpeg_destroy_compress(&jpeg);

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  jpeg_destroy_decompress(&jpeg);

  jpeg.input_components = bitmapData->ch;

  } else {

  png_bytepp datap;

  png_structp png;

  height = png_get_image_height(png, info);

  }

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  }

    printf("%sは開けません\n", filename);

}

  bitmapData->width = jpeg.output_width;

  int j;

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    png_destroy_write_struct(&png, &info);

  png_bytepp datap;



  }

  png_structp png;







    printf("ch num is invalid!\n");

  jpeg.image_height = bitmapData->height;

    printf("%sは開けません\n", filename);

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  jpeg_stdio_dest(&jpeg, fo);

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

  } else if(bitmapData->ch == 4) {



  info = png_create_info_struct(png);

  type = png_get_color_type(png, info);

  jpeg_set_defaults(&jpeg);

  bitmapData->width = width;

  png_init_io(png, fo);



    png_destroy_read_struct(&png, &info, NULL);

    fclose(fi);

  return 0;

  for(j = 0; j < jpeg.output_height; j++){

  jpeg_stdio_dest(&jpeg, fo);

    return -1;

  return 0;

    return -1;

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    printf("png_sig_cmp error!\n");

    return -1;



    return -1;

  jpeg_finish_compress(&jpeg);

  } else if(type == PNG_COLOR_TYPE_RGBA) {



  jpeg_read_header(&jpeg, TRUE);

  }

  int j;

  }



  bitmapData->data =

    return -1;

  if(bitmap->data != NULL){

}

  jpeg_stdio_src(&jpeg, fi);

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  }

    printf("data malloc error\n");

  int j;



    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);

  if(type == PNG_COLOR_TYPE_RGB) {



  png_infop info;

  jpeg.err = jpeg_std_error(&err);

  }

  jpeg.in_color_space = JCS_RGB;

  png_set_rows(png, info, datap);

  }

  }

  struct jpeg_decompress_struct jpeg;

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  fclose(fi);

  }

    fclose(fi);



  return 0;

  }

  free(bitmap->data);

  for(j = 0; j < jpeg.output_height; j++){



int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){



  FILE *fi;

}

    return -1;

  jpeg_finish_decompress(&jpeg);

  } else if(bitmapData->ch == 4) {



    printf("png_sig_cmp error!\n");

  png_set_sig_bytes(png, readSize);

  jpeg.err = jpeg_std_error(&err);

  jpeg.in_color_space = JCS_RGB;

  png_bytepp datap;



  if(fi == NULL){

  if(fo == NULL){

  }

    return -1;

  }

  jpeg_finish_compress(&jpeg);

    png_destroy_read_struct(&png, &info, NULL);

  jpeg_set_quality(&jpeg, 50, TRUE);

    bitmapData->ch = 3;

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  png_set_sig_bytes(png, readSize);









    return -1;





}
}

  for(j = 0; j < bitmapData->height; j++){

  fo = fopen(filename, "wb");

    return -1;



    return -1;



  }

  info = png_create_info_struct(png);

  png_byte type;



    jpeg_write_scanlines(&jpeg, &address, 1);

  }

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

int freeBitmapData(BITMAPDATA_t *bitmap){



  jpeg.image_height = bitmapData->height;



  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

  }

  if(info == NULL){

  int j;

  bitmapData->height = height;

  FILE *fi;

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  fo = fopen(filename, "wb");

  }

  jpeg_finish_decompress(&jpeg);

  if(bitmapData->ch == 3) {

  jpeg_finish_compress(&jpeg);

  info = png_create_info_struct(png);

  png_destroy_write_struct(&png, &info);

  png_infop info;

  }

    fclose(fi);

  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  int j;

  if(info == NULL){

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);



}

    printf("%sは開けません\n", filename);

  jpeg.err = jpeg_std_error(&err);

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  free(bitmap->data);

    jpeg_destroy_decompress(&jpeg);

    return -1;

    return -1;



  return 0;





  jpeg_start_decompress(&jpeg);

    bitmapData->ch = 4;

    printf("data malloc error\n");

  bitmapData->data =

  jpeg.input_components = bitmapData->ch;

  }

  }

  return 0;

  }

    return -1;

  if(fi == NULL){

  for (j = 0; j < jpeg.image_height; j++ ) {

  jpeg_set_defaults(&jpeg);

  }

    printf("png_crete_info_struct error!\n");

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

}

  FILE *fi;

  jpeg.input_components = bitmapData->ch;

  jpeg_set_quality(&jpeg, 50, TRUE);

  info = png_create_info_struct(png);

    printf("color type is not RGB or RGBA\n");

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

    printf("png_create_read_struct error!\n");

  for(j = 0; j < jpeg.output_height; j++){

    jpeg_read_scanlines(&jpeg, &tmp, 1);

  jpeg_stdio_src(&jpeg, fi);



  } else if(bitmapData->ch == 4) {

  fo = fopen(filename, "wb");





    fclose(fo);

  jpeg.image_width = bitmapData->width;

  bitmapData->ch = jpeg.out_color_components;

}

  png_set_sig_bytes(png, readSize);



  jpeg_finish_decompress(&jpeg);

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  png_init_io(png, fi);



  } else if(bitmapData->ch == 4) {

  return 0;

  return 0;

  fi = fopen(filename, "rb");

  jpeg_destroy_decompress(&jpeg);



  if(bitmapData->data == NULL){

  }

  png_infop info;



    png_destroy_read_struct(&png, NULL, NULL);

  FILE *fo;

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  png_init_io(png, fi);

  png_structp png;



  }

    printf("png_crete_info_struct error!\n");

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  png_byte signature[8];

    return -1;

  jpeg.in_color_space = JCS_RGB;

    printf("data malloc error\n");



  }

    printf("png_create_read_struct error!\n");



  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

  }



  jpeg.err = jpeg_std_error(&err);

  if(bitmapData->ch == 3) {

  struct jpeg_compress_struct jpeg;

int freeBitmapData(BITMAPDATA_t *bitmap){



  }

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  }

  jpeg_set_quality(&jpeg, 50, TRUE);

  jpeg_create_decompress(&jpeg);

  unsigned int readSize;

  bitmapData->ch = jpeg.out_color_components;

  png_init_io(png, fi);

  bitmapData->width = jpeg.output_width;

  bitmapData->height = jpeg.output_height;

    fclose(fi);



    return -1;



  bitmapData->ch = jpeg.out_color_components;

    return -1;

    return -1;



    return -1;



  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

    printf("color type is not RGB or RGBA\n");

  png_infop info;



  png_free(png, datap);



    return -1;



    jpeg_write_scanlines(&jpeg, &address, 1);

    printf("data malloc error\n");

    png_free(png, datap[j]);



  }

  FILE *fo;

  if(bitmapData->ch == 3) {

  FILE *fi;

  if(fi == NULL){



int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

    type = PNG_COLOR_TYPE_RGB;

  return 0;

  png_byte type;

    png_destroy_read_struct(&png, &info, NULL);

  JSAMPLE *address;





    jpeg_destroy_decompress(&jpeg);

  }

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  info = png_create_info_struct(png);

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);



    fclose(fi);

  }

  } else if(type == PNG_COLOR_TYPE_RGBA) {

  jpeg_create_decompress(&jpeg);

  }

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  jpeg_destroy_compress(&jpeg);



    return -1;

    return -1;

    fclose(fo);

  }



  }



    return -1;

    png_destroy_write_struct(&png, &info);

  width = png_get_image_width(png, info);

  unsigned int width, height;

}

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

    return -1;

  for(j = 0; j < bitmapData->height; j++){



  jpeg_stdio_dest(&jpeg, fo);

  if(info == NULL){

  if(type == PNG_COLOR_TYPE_RGB) {

  if(fo == NULL){

    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);

  jpeg.image_width = bitmapData->width;

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  bitmapData->height = height;

  jpeg.in_color_space = JCS_RGB;

int freeBitmapData(BITMAPDATA_t *bitmap){



  for(j = 0; j < bitmapData->height; j++){

  png_structp png;

  png_set_sig_bytes(png, readSize);

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  jpeg_start_decompress(&jpeg);

  jpeg_stdio_src(&jpeg, fi);

  jpeg.in_color_space = JCS_RGB;

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  } else {

  for(j = 0; j < bitmapData->height; j++){

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  return 0;



  return 0;

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

    png_free(png, datap[j]);



    png_free(png, datap[j]);



  }

  width = png_get_image_width(png, info);

  if(bitmapData->ch == 3) {

  unsigned int width, height;



  fclose(fo);

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

}

  FILE *fo;

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

    printf("%sは開けません\n", filename);

  jpeg_finish_decompress(&jpeg);

int freeBitmapData(BITMAPDATA_t *bitmap){

    fclose(fo);

  if(bitmapData->data == NULL){

  bitmapData->width = width;

  png_infop info;

  jpeg.image_height = bitmapData->height;

    png_destroy_read_struct(&png, NULL, NULL);

  type = png_get_color_type(png, info);

  }

    fclose(fi);

  if(bitmapData->ch == 3) {

  }

    png_destroy_write_struct(&png, &info);

  return 0;







  jpeg_destroy_compress(&jpeg);

    printf("png_sig_cmp error!\n");

    jpeg_read_scanlines(&jpeg, &tmp, 1);

  }



}

  png_bytepp datap;

  jpeg_finish_compress(&jpeg);





  }

  int j;

  } else if(bitmapData->ch == 4) {

  unsigned int width, height;

  FILE *fo;

    return -1;



  png_destroy_write_struct(&png, &info);

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  jpeg_read_header(&jpeg, TRUE);





  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

    return -1;

  png_structp png;

  fi = fopen(filename, "rb");

  jpeg.err = jpeg_std_error(&err);

    type = PNG_COLOR_TYPE_RGB;

  for(j = 0; j < jpeg.output_height; j++){

  bitmapData->width = width;

}

  jpeg_start_decompress(&jpeg);



  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){



  if(bitmapData->ch == 3) {

    jpeg_destroy_decompress(&jpeg);

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

    jpeg_destroy_compress(&jpeg);



  png_bytepp datap;

  if(fi == NULL){





  info = png_create_info_struct(png);

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);





  jpeg_destroy_decompress(&jpeg);

  }





  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){

  jpeg_set_defaults(&jpeg);

    printf("png_sig_cmp error!\n");



  struct jpeg_compress_struct jpeg;



    return -1;



  jpeg_finish_decompress(&jpeg);

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);



    jpeg_read_scanlines(&jpeg, &tmp, 1);



  jpeg.err = jpeg_std_error(&err);

  jpeg_destroy_decompress(&jpeg);



}
  if(type == PNG_COLOR_TYPE_RGB) {

    png_destroy_write_struct(&png, &info);





    free(bitmap->data);



  }

    jpeg_read_scanlines(&jpeg, &tmp, 1);

}



    free(bitmap->data);

    free(bitmap->data);



  if(fi == NULL){





  }

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  type = png_get_color_type(png, info);

  int j;

  jpeg_stdio_dest(&jpeg, fo);

  fo = fopen(filename, "wb");

    jpeg_destroy_compress(&jpeg);

  jpeg.err = jpeg_std_error(&err);



int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  }

    fclose(fi);

    jpeg_read_scanlines(&jpeg, &tmp, 1);

    return -1;



  png_bytepp datap;



  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  int j;

  }

  int j;

  jpeg.image_height = bitmapData->height;



  }

  info = png_create_info_struct(png);

    printf("%sは開けません\n", filename);

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  jpeg.input_components = bitmapData->ch;



    fclose(fi);

  return 0;

}
  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  if(png == NULL){

    png_destroy_read_struct(&png, NULL, NULL);



  jpeg_set_quality(&jpeg, 50, TRUE);

    png_free(png, datap[j]);

  }

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

    return -1;



  png_infop info;

  fclose(fi);

    printf("ch num is invalid!\n");

  return 0;



  png_byte type;



  return 0;

  if(fi == NULL){

  }

  }



  png_init_io(png, fo);



  FILE *fi;

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  }



    png_destroy_read_struct(&png, &info, NULL);



  jpeg.err = jpeg_std_error(&err);

  bitmapData->ch = jpeg.out_color_components;

    printf("%sは開けません\n", filename);



  FILE *fi;



  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);



    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

    fclose(fi);

    fclose(fo);

    printf("%sは開けません\n", filename);

    return -1;



  JSAMPLE *tmp;

  if(fi == NULL){

  if(bitmap->data != NULL){



  } else if(type == PNG_COLOR_TYPE_RGBA) {



  if(png == NULL){

    fclose(fi);

  }



  fi = fopen(filename, "rb");

    fclose(fi);

    png_destroy_read_struct(&png, &info, NULL);

  png_bytepp datap;









  struct jpeg_error_mgr err;

  }

  FILE *fi;

    fclose(fi);

  jpeg_stdio_dest(&jpeg, fo);



    printf("png_sig_cmp error!\n");

  jpeg.image_height = bitmapData->height;

  bitmapData->height = height;

int freeBitmapData(BITMAPDATA_t *bitmap){

  }

  unsigned int width, height;

    fclose(fi);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  bitmapData->width = width;

    png_destroy_read_struct(&png, NULL, NULL);

    png_free(png, datap[j]);

    type = PNG_COLOR_TYPE_RGB;

    jpeg_destroy_compress(&jpeg);

    jpeg_destroy_compress(&jpeg);

  jpeg_start_compress(&jpeg, TRUE);



  if(info == NULL){

  bitmapData->width = jpeg.output_width;



  bitmapData->height = height;

    return -1;



    png_free(png, datap[j]);

  }

  return 0;

  png_init_io(png, fo);



  }

    return -1;



  for (j = 0; j < jpeg.image_height; j++ ) {

    fclose(fi);

  jpeg_finish_decompress(&jpeg);

    fclose(fo);

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  JSAMPLE *address;

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);







  for(j = 0; j < bitmapData->height; j++){

  for(j = 0; j < bitmapData->height; j++){

  jpeg_stdio_dest(&jpeg, fo);

    printf("color type is not RGB or RGBA\n");

    return -1;

  fo = fopen(filename, "wb");

  }

  type = png_get_color_type(png, info);

  if(fi == NULL){

    png_destroy_read_struct(&png, NULL, NULL);

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

  unsigned int readSize;

  struct jpeg_compress_struct jpeg;

    printf("%sは開けません\n", filename);

int freeBitmapData(BITMAPDATA_t *bitmap){

int freeBitmapData(BITMAPDATA_t *bitmap){

  for(j = 0; j < bitmapData->height; j++){



  }



  if(type == PNG_COLOR_TYPE_RGB) {

    fclose(fi);



int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  png_bytepp datap;

  }

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){



  png_init_io(png, fo);



  free(bitmap->data);



  return 0;

    return -1;

  int j;

  jpeg.input_components = bitmapData->ch;

    printf("%sは開けません\n", filename);

  }

int freeBitmapData(BITMAPDATA_t *bitmap){

  for (j = 0; j < jpeg.image_height; j++ ) {

  fclose(fi);

  for(j = 0; j < bitmapData->height; j++){

  png_init_io(png, fi);

}

  if(bitmapData->data == NULL){

    fclose(fo);

  if(bitmapData->ch == 3) {



    printf("data malloc error\n");



  } else if(bitmapData->ch == 4) {



  }

}

  fclose(fo);



    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  FILE *fi;

}



  png_byte type;

  }



  info = png_create_info_struct(png);





  fi = fopen(filename, "rb");

  jpeg.err = jpeg_std_error(&err);

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    fclose(fi);

}

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  if(fi == NULL){



    fclose(fi);

  }

    printf("data malloc error\n");

  bitmapData->width = jpeg.output_width;

  if(bitmapData->ch == 3) {

  unsigned int readSize;

  jpeg_start_compress(&jpeg, TRUE);

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  }

int freeBitmapData(BITMAPDATA_t *bitmap){



int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  struct jpeg_compress_struct jpeg;





  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  png_infop info;



    jpeg_read_scanlines(&jpeg, &tmp, 1);





  }

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  bitmapData->width = jpeg.output_width;

  struct jpeg_compress_struct jpeg;

}

  FILE *fi;

}
  free(bitmap->data);

  png_init_io(png, fi);

  }

  return 0;

    return -1;



  return 0;

  return 0;

  FILE *fo;

  fo = fopen(filename, "wb");

  int j;





  jpeg_finish_compress(&jpeg);



  jpeg.in_color_space = JCS_RGB;

  for (j = 0; j < jpeg.image_height; j++ ) {

    return -1;

  struct jpeg_error_mgr err;

  FILE *fo;

  png_set_sig_bytes(png, readSize);

  datap = png_get_rows(png, info);

  width = png_get_image_width(png, info);

  unsigned int readSize;

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;



  }

    printf("data malloc error\n");

  return 0;

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  png_set_sig_bytes(png, readSize);

  if(type == PNG_COLOR_TYPE_RGB) {

  }

  jpeg_finish_decompress(&jpeg);

  png_destroy_read_struct(&png, &info, NULL);



  struct jpeg_compress_struct jpeg;

  } else {





  if(fo == NULL){

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

    jpeg_write_scanlines(&jpeg, &address, 1);

  JSAMPLE *tmp;

  }

  unsigned int width, height;



    return -1;





  struct jpeg_decompress_struct jpeg;

    printf("data malloc error\n");

  fclose(fi);

    printf("png_crete_info_struct error!\n");



  for(j = 0; j < bitmapData->height; j++){

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

    fclose(fi);

  bitmapData->width = width;

  fclose(fi);

  width = png_get_image_width(png, info);

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  }

  jpeg.in_color_space = JCS_RGB;

    png_destroy_read_struct(&png, &info, NULL);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    printf("%sは開けません\n", filename);

  jpeg_read_header(&jpeg, TRUE);

    bitmapData->ch = 4;

  if(fi == NULL){

  png_destroy_write_struct(&png, &info);

    printf("ch num is invalid!\n");



  } else if(type == PNG_COLOR_TYPE_RGBA) {

  } else if(type == PNG_COLOR_TYPE_RGBA) {

  if(bitmap->data != NULL){

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  return 0;

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

    type = PNG_COLOR_TYPE_RGB_ALPHA;

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  FILE *fo;

  unsigned int width, height;

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  if(info == NULL){



  jpeg_destroy_decompress(&jpeg);

  for(j = 0; j < jpeg.output_height; j++){

  info = png_create_info_struct(png);



    png_free(png, datap[j]);

    return -1;

    free(bitmap->data);

    jpeg_write_scanlines(&jpeg, &address, 1);



  for(j = 0; j < bitmapData->height; j++){

  for(j = 0; j < bitmapData->height; j++){

  bitmapData->width = jpeg.output_width;

    printf("data malloc error\n");

  }

    fclose(fo);

  }



  int j;

  fi = fopen(filename, "rb");

    return -1;

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);



  }

  jpeg.in_color_space = JCS_RGB;

  jpeg_stdio_src(&jpeg, fi);

  free(bitmap->data);

  int j;

  info = png_create_info_struct(png);

  }

  for(j = 0; j < bitmapData->height; j++){

  if(png == NULL){

  if(info == NULL){

    jpeg_write_scanlines(&jpeg, &address, 1);

  jpeg.in_color_space = JCS_RGB;

  if(info == NULL){

  png_byte type;



  if(fo == NULL){

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  }

  }

  bitmapData->height = height;

  jpeg_finish_compress(&jpeg);

    bitmap->data = NULL;





  }



    return -1;

    printf("color type is not RGB or RGBA\n");

  info = png_create_info_struct(png);

  info = png_create_info_struct(png);

  jpeg_stdio_dest(&jpeg, fo);

  } else if(type == PNG_COLOR_TYPE_RGBA) {

    bitmapData->ch = 3;

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

  info = png_create_info_struct(png);

  unsigned int width, height;



  bitmapData->ch = jpeg.out_color_components;

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  struct jpeg_compress_struct jpeg;

  if(png == NULL){

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  } else {



  png_set_sig_bytes(png, readSize);



  JSAMPLE *address;

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  if(type == PNG_COLOR_TYPE_RGB) {

  }



int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  unsigned int width, height;

  type = png_get_color_type(png, info);

  for(j = 0; j < bitmapData->height; j++){



  fclose(fi);

  fo = fopen(filename, "wb");

  bitmapData->height = jpeg.output_height;

    fclose(fi);



    fclose(fi);

    fclose(fo);

  fo = fopen(filename, "wb");

  fclose(fi);

  struct jpeg_error_mgr err;

  return 0;

  }

    printf("%sは開けません\n", filename);



  } else if(type == PNG_COLOR_TYPE_RGBA) {

  jpeg_finish_decompress(&jpeg);

  }

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

    printf("%sは開けません\n", filename);

  int j;

  }



  jpeg.in_color_space = JCS_RGB;

  }





  bitmapData->width = width;



  } else if(bitmapData->ch == 4) {

  png_free(png, datap);





    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

    return -1;



  return 0;

  png_init_io(png, fi);



    return -1;



    fclose(fi);

    printf("%sは開けません\n", filename);

  png_init_io(png, fo);

  png_init_io(png, fi);

  fi = fopen(filename, "rb");

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  jpeg.image_width = bitmapData->width;



    png_destroy_read_struct(&png, NULL, NULL);

  jpeg_set_defaults(&jpeg);

    bitmap->data = NULL;

  unsigned int readSize;

}
  jpeg.image_width = bitmapData->width;

    bitmapData->ch = 3;

  struct jpeg_error_mgr err;

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  return 0;

  int j;

  jpeg.err = jpeg_std_error(&err);

  info = png_create_info_struct(png);

  bitmapData->height = height;



  }



  bitmapData->height = jpeg.output_height;

  png_set_rows(png, info, datap);

  fclose(fi);





  for(j = 0; j < bitmapData->height; j++){

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

    return -1;

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  unsigned int width, height;

  info = png_create_info_struct(png);

  jpeg.err = jpeg_std_error(&err);

  fo = fopen(filename, "wb");



  }

  jpeg_destroy_compress(&jpeg);



  jpeg_start_compress(&jpeg, TRUE);



}



    png_destroy_write_struct(&png, &info);

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

    bitmapData->ch = 4;

  for(j = 0; j < jpeg.output_height; j++){



    return -1;







    return -1;

  jpeg_create_decompress(&jpeg);

  }

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);





    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

    jpeg_destroy_decompress(&jpeg);

  }

  return 0;





  jpeg_finish_compress(&jpeg);



    printf("png_create_read_struct error!\n");

  }

    bitmap->data = NULL;



  return 0;





    printf("%sは開けません\n", filename);



  }

  }

  fi = fopen(filename, "rb");



  for (j = 0; j < jpeg.image_height; j++ ) {

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  bitmapData->height = jpeg.output_height;

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  info = png_create_info_struct(png);



    printf("color type is not RGB or RGBA\n");

    return -1;

  png_bytepp datap;

  }

  png_byte signature[8];

  info = png_create_info_struct(png);

  png_structp png;

    return -1;

  if(png == NULL){

  }





  png_byte type;



    return -1;





  png_init_io(png, fi);

  png_init_io(png, fi);

  fclose(fo);

  if(png == NULL){

  int j;

  datap = png_get_rows(png, info);

    printf("png_sig_cmp error!\n");

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  FILE *fo;

    fclose(fi);

    type = PNG_COLOR_TYPE_RGB;

  }

  }

  png_destroy_read_struct(&png, &info, NULL);



  int j;



  png_destroy_read_struct(&png, &info, NULL);

  struct jpeg_decompress_struct jpeg;

    type = PNG_COLOR_TYPE_RGB;

  bitmapData->data =



  if(fo == NULL){

    printf("ch num is invalid!\n");

    printf("%sは開けません\n", filename);



    return -1;





    fclose(fi);

}

  bitmapData->width = width;

  jpeg_create_compress(&jpeg);

  if(fi == NULL){

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

    free(bitmap->data);



  return 0;

    fclose(fo);

  png_infop info;

  png_byte type;

  fclose(fi);



  for (j = 0; j < jpeg.image_height; j++ ) {

    return -1;

    png_destroy_read_struct(&png, &info, NULL);



  bitmapData->width = width;

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

    png_destroy_read_struct(&png, &info, NULL);

  if(info == NULL){

  }



}
}

  int j;

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  png_init_io(png, fi);

    fclose(fi);

  jpeg_create_compress(&jpeg);

  FILE *fo;

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  jpeg_destroy_decompress(&jpeg);

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);



  png_infop info;

int freeBitmapData(BITMAPDATA_t *bitmap){

    return -1;

  return 0;

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

    printf("%sは開けません\n", filename);

  height = png_get_image_height(png, info);

    return -1;







  bitmapData->width = jpeg.output_width;

  }

int freeBitmapData(BITMAPDATA_t *bitmap){

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  bitmapData->width = width;

    printf("%sは開けません\n", filename);

  jpeg_create_decompress(&jpeg);

    bitmapData->ch = 4;

  }

  png_destroy_write_struct(&png, &info);

    return -1;

  png_structp png;

  } else {







  unsigned int readSize;

  bitmapData->height = jpeg.output_height;

  }

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  }

    printf("data malloc error\n");

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    printf("%sは開けません\n", filename);

  png_structp png;



  png_infop info;

    fclose(fi);



  jpeg.err = jpeg_std_error(&err);



  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){





    printf("data malloc error\n");

  type = png_get_color_type(png, info);

  jpeg.err = jpeg_std_error(&err);

  jpeg_set_quality(&jpeg, 50, TRUE);

  unsigned int readSize;

    type = PNG_COLOR_TYPE_RGB;



    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  int j;



  struct jpeg_error_mgr err;



int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){





  }

    return -1;

    return -1;

  fo = fopen(filename, "wb");

    return -1;

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){



  png_set_rows(png, info, datap);

  }

  jpeg.in_color_space = JCS_RGB;

  FILE *fo;

    printf("png_sig_cmp error!\n");

  jpeg_destroy_compress(&jpeg);

  png_init_io(png, fo);

  unsigned int readSize;



  }

    jpeg_write_scanlines(&jpeg, &address, 1);

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  }



  fi = fopen(filename, "rb");

    type = PNG_COLOR_TYPE_RGB_ALPHA;



  }

  datap = png_get_rows(png, info);

    png_destroy_read_struct(&png, NULL, NULL);





    png_destroy_write_struct(&png, &info);

    printf("%sは開けません\n", filename);

  }

  return 0;

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);





  struct jpeg_error_mgr err;



    return -1;

  jpeg.image_height = bitmapData->height;

  JSAMPLE *tmp;

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);



  FILE *fi;

  }

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);



  }



    printf("png_crete_info_struct error!\n");

  png_init_io(png, fo);

  fo = fopen(filename, "wb");



  png_structp png;

  jpeg.input_components = bitmapData->ch;

  datap = png_get_rows(png, info);

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

    jpeg_destroy_decompress(&jpeg);

  }

  }



    jpeg_destroy_decompress(&jpeg);

  jpeg_destroy_decompress(&jpeg);

  png_destroy_read_struct(&png, &info, NULL);

  }

  png_free(png, datap);

  jpeg_start_compress(&jpeg, TRUE);

  bitmapData->width = width;

  info = png_create_info_struct(png);

  png_bytepp datap;

  int j;



  unsigned int width, height;

    return -1;



  bitmapData->ch = jpeg.out_color_components;



int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  png_bytepp datap;

    png_destroy_write_struct(&png, &info);

  return 0;

  int j;

  return 0;

  fclose(fi);

}



  int j;

  return 0;

    return -1;



  bitmapData->height = jpeg.output_height;

    return -1;

  jpeg.err = jpeg_std_error(&err);

  struct jpeg_decompress_struct jpeg;

  jpeg.image_width = bitmapData->width;

  png_bytepp datap;



  for (j = 0; j < jpeg.image_height; j++ ) {

  return 0;

    free(bitmap->data);

    printf("%sは開けません\n", filename);

  jpeg_finish_compress(&jpeg);



  }



    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

    printf("ch num is invalid!\n");

  png_destroy_read_struct(&png, &info, NULL);

  jpeg_finish_decompress(&jpeg);

    printf("%sは開けません\n", filename);

  int j;

  if(png == NULL){



  fi = fopen(filename, "rb");

  fo = fopen(filename, "wb");

    return -1;

    fclose(fi);

int freeBitmapData(BITMAPDATA_t *bitmap){

    return -1;



  jpeg.in_color_space = JCS_RGB;

    return -1;



  if(fo == NULL){

  }

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  png_set_rows(png, info, datap);

  }

    png_destroy_write_struct(&png, &info);

    type = PNG_COLOR_TYPE_RGB;

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

  if(info == NULL){

    fclose(fi);





  bitmapData->data =

  }

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  bitmapData->width = width;

  unsigned int readSize;

  } else if(bitmapData->ch == 4) {

  jpeg_stdio_dest(&jpeg, fo);



  if(info == NULL){

    return -1;









  jpeg_destroy_decompress(&jpeg);

  return 0;



  fo = fopen(filename, "wb");

    return -1;

    printf("%sは開けません\n", filename);

  }

    free(bitmap->data);





  jpeg.input_components = bitmapData->ch;



  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);







    type = PNG_COLOR_TYPE_RGB;

  for(j = 0; j < bitmapData->height; j++){



  }



  if(fi == NULL){



  fi = fopen(filename, "rb");

    bitmapData->ch = 3;





    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  jpeg_destroy_decompress(&jpeg);

    printf("%sは開けません\n", filename);

  fi = fopen(filename, "rb");

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);



    bitmap->data = NULL;



  bitmapData->width = jpeg.output_width;

}

    type = PNG_COLOR_TYPE_RGB_ALPHA;



  png_structp png;

  jpeg_start_decompress(&jpeg);



  if(fo == NULL){

  unsigned int readSize;

  free(bitmap->data);

  jpeg_start_decompress(&jpeg);

  }



  }

  bitmapData->height = height;

  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);

    printf("%sは開けません\n", filename);

  return 0;



    jpeg_read_scanlines(&jpeg, &tmp, 1);

    return -1;

  }



}

  png_init_io(png, fo);

  unsigned int width, height;

  } else {



    printf("png_crete_info_struct error!\n");

  png_set_rows(png, info, datap);

  png_destroy_write_struct(&png, &info);





  bitmapData->height = height;



int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){



int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  if(fi == NULL){

  bitmapData->data =

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);





}

  width = png_get_image_width(png, info);

  }

  jpeg_finish_decompress(&jpeg);

  for(j = 0; j < bitmapData->height; j++){

  unsigned int width, height;

  }

}

  png_structp png;

    png_destroy_write_struct(&png, &info);

  png_destroy_read_struct(&png, &info, NULL);



  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  jpeg_read_header(&jpeg, TRUE);

    printf("%sは開けません\n", filename);



    printf("data malloc error\n");

    png_free(png, datap[j]);



  fo = fopen(filename, "wb");

  if(fi == NULL){

    return -1;

    return -1;

  info = png_create_info_struct(png);

  png_bytepp datap;

    png_destroy_read_struct(&png, &info, NULL);



  }

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  jpeg.err = jpeg_std_error(&err);

    printf("%sは開けません\n", filename);



  bitmapData->data =

  bitmapData->width = width;

  png_destroy_write_struct(&png, &info);

  return 0;

  JSAMPLE *address;

  for(j = 0; j < jpeg.output_height; j++){



  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  fo = fopen(filename, "wb");

    return -1;

  info = png_create_info_struct(png);

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

    type = PNG_COLOR_TYPE_RGB;

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  struct jpeg_error_mgr err;



    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);



  fo = fopen(filename, "wb");

    jpeg_destroy_decompress(&jpeg);

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  png_bytepp datap;

  height = png_get_image_height(png, info);

  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){



    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

    jpeg_destroy_decompress(&jpeg);

    png_destroy_read_struct(&png, &info, NULL);



    return -1;

    fclose(fi);



  for(j = 0; j < bitmapData->height; j++){

  for(j = 0; j < jpeg.output_height; j++){





  for(j = 0; j < bitmapData->height; j++){





    jpeg_write_scanlines(&jpeg, &address, 1);

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  }

  png_init_io(png, fo);



    return -1;

  }

  if(bitmap->data != NULL){

  }

  fclose(fi);

  }

    jpeg_write_scanlines(&jpeg, &address, 1);

  width = png_get_image_width(png, info);

    png_destroy_read_struct(&png, &info, NULL);

  bitmapData->data =

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);





  jpeg_destroy_decompress(&jpeg);

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  if(fo == NULL){

  int j;

  FILE *fo;

    return -1;

    jpeg_write_scanlines(&jpeg, &address, 1);

  png_init_io(png, fi);

  for(j = 0; j < bitmapData->height; j++){

  } else {

  if(fi == NULL){

  width = png_get_image_width(png, info);

  png_byte signature[8];

  fo = fopen(filename, "wb");



  png_bytepp datap;



  FILE *fo;



  }

  png_set_sig_bytes(png, readSize);

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  return 0;

  png_set_rows(png, info, datap);

  bitmapData->data =

  if(fo == NULL){

    fclose(fo);

}

    png_destroy_write_struct(&png, &info);

    printf("%sは開けません\n", filename);

    free(bitmap->data);

  jpeg_create_compress(&jpeg);

    jpeg_destroy_compress(&jpeg);

  png_init_io(png, fi);

  width = png_get_image_width(png, info);

    png_free(png, datap[j]);

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  type = png_get_color_type(png, info);

  jpeg.image_height = bitmapData->height;

  }



    jpeg_destroy_decompress(&jpeg);



  }

    return -1;



  FILE *fo;

  fi = fopen(filename, "rb");





  jpeg_set_quality(&jpeg, 50, TRUE);

    return -1;

    png_destroy_read_struct(&png, &info, NULL);

  jpeg_destroy_decompress(&jpeg);

  FILE *fi;



  png_destroy_write_struct(&png, &info);

    return -1;

  width = png_get_image_width(png, info);

  bitmapData->height = jpeg.output_height;

int freeBitmapData(BITMAPDATA_t *bitmap){

  }



    jpeg_destroy_decompress(&jpeg);

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  if(png == NULL){

  return 0;

}





  int j;

    return -1;

  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);



  bitmapData->ch = jpeg.out_color_components;

  }



  if(info == NULL){

    printf("%sは開けません\n", filename);

    return -1;

  unsigned int readSize;





    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  type = png_get_color_type(png, info);









  }

  fclose(fi);

    type = PNG_COLOR_TYPE_RGB;

    bitmap->data = NULL;

  png_init_io(png, fi);

  }

    bitmap->data = NULL;

  if(png == NULL){



  jpeg_stdio_dest(&jpeg, fo);

  jpeg.err = jpeg_std_error(&err);

int freeBitmapData(BITMAPDATA_t *bitmap){

  }

  fo = fopen(filename, "wb");



  for(j = 0; j < bitmapData->height; j++){

}



    bitmapData->ch = 3;



}


int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){



  if(fi == NULL){

  bitmapData->height = height;

    png_destroy_read_struct(&png, &info, NULL);

  JSAMPLE *address;

  if(info == NULL){

    fclose(fi);

  if(bitmapData->data == NULL){

    printf("data malloc error\n");

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){



  bitmapData->data =

    png_destroy_read_struct(&png, &info, NULL);



    type = PNG_COLOR_TYPE_RGB;

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  int j;

  } else if(bitmapData->ch == 4) {

  png_structp png;

    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);

  jpeg_destroy_decompress(&jpeg);

    printf("%sは開けません\n", filename);

  jpeg_start_decompress(&jpeg);





}

  jpeg_create_compress(&jpeg);



  bitmapData->data =



  jpeg.err = jpeg_std_error(&err);

  }





    return -1;

  png_infop info;

  jpeg_set_defaults(&jpeg);

  return 0;



    return -1;

  if(bitmapData->data == NULL){

    bitmapData->ch = 4;

    png_destroy_read_struct(&png, &info, NULL);



  jpeg_start_compress(&jpeg, TRUE);

  jpeg_stdio_dest(&jpeg, fo);

    fclose(fi);



  if(bitmap->data != NULL){

  jpeg_read_header(&jpeg, TRUE);

  FILE *fi;



  }

  struct jpeg_decompress_struct jpeg;



  }

    png_free(png, datap[j]);

  png_init_io(png, fo);



  struct jpeg_error_mgr err;

  fclose(fi);

  jpeg.input_components = bitmapData->ch;



    printf("png_sig_cmp error!\n");

  }



  }

    jpeg_write_scanlines(&jpeg, &address, 1);

  FILE *fo;

  jpeg_stdio_dest(&jpeg, fo);

  }



    printf("%sは開けません\n", filename);



  jpeg_stdio_src(&jpeg, fi);

  png_destroy_read_struct(&png, &info, NULL);

  }



  info = png_create_info_struct(png);

  bitmapData->data =

int freeBitmapData(BITMAPDATA_t *bitmap){

  for(j = 0; j < bitmapData->height; j++){

  JSAMPLE *tmp;

  jpeg.image_width = bitmapData->width;

    return -1;

    printf("png_crete_info_struct error!\n");



    return -1;

  }

  }



  }

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);



    jpeg_write_scanlines(&jpeg, &address, 1);

  if(fi == NULL){

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

}
  jpeg_start_compress(&jpeg, TRUE);

    fclose(fi);

  height = png_get_image_height(png, info);

    jpeg_write_scanlines(&jpeg, &address, 1);

  info = png_create_info_struct(png);

    type = PNG_COLOR_TYPE_RGB;



  }

    png_free(png, datap[j]);

  png_structp png;



  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  if(bitmapData->data == NULL){

  }

  }

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);



    printf("png_sig_cmp error!\n");

    png_destroy_read_struct(&png, &info, NULL);

    png_destroy_write_struct(&png, &info);

  return 0;

  bitmapData->data =

    return -1;







  jpeg_destroy_compress(&jpeg);

    png_destroy_read_struct(&png, &info, NULL);

  unsigned int readSize;

  png_destroy_write_struct(&png, &info);

  if(bitmapData->data == NULL){



  jpeg_start_decompress(&jpeg);

    return -1;

  int j;

int freeBitmapData(BITMAPDATA_t *bitmap){

  FILE *fo;

    bitmapData->ch = 4;

  JSAMPLE *tmp;

  FILE *fi;

  png_destroy_write_struct(&png, &info);

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);





    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  png_infop info;

  png_structp png;

    fclose(fi);

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  png_byte type;

  struct jpeg_compress_struct jpeg;





  png_set_sig_bytes(png, readSize);



    printf("color type is not RGB or RGBA\n");

  png_set_rows(png, info, datap);

    free(bitmap->data);

  if(bitmap->data != NULL){



    printf("data malloc error\n");



  png_bytepp datap;

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  free(bitmap->data);

}

  struct jpeg_compress_struct jpeg;

    return -1;

  fo = fopen(filename, "wb");



  return 0;

  if(bitmap->data != NULL){

  for(j = 0; j < bitmapData->height; j++){

    fclose(fi);

}

}

    type = PNG_COLOR_TYPE_RGB_ALPHA;

  png_set_sig_bytes(png, readSize);

  return 0;

  jpeg_create_decompress(&jpeg);

  }

    printf("%sは開けません\n", filename);

  png_set_sig_bytes(png, readSize);

  unsigned int readSize;

    fclose(fo);

  datap = png_get_rows(png, info);

  return 0;



  jpeg_create_compress(&jpeg);

  info = png_create_info_struct(png);



    fclose(fo);

  }

  fi = fopen(filename, "rb");

    png_free(png, datap[j]);

  int j;

  }

  }





  } else {



    free(bitmap->data);

  jpeg_destroy_compress(&jpeg);

    return -1;

  png_set_sig_bytes(png, readSize);

  png_infop info;

  int j;

  fo = fopen(filename, "wb");

  jpeg.image_height = bitmapData->height;

    type = PNG_COLOR_TYPE_RGB;



  }

  datap = png_get_rows(png, info);

  fclose(fi);

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  for(j = 0; j < bitmapData->height; j++){

  jpeg_destroy_decompress(&jpeg);

  png_destroy_write_struct(&png, &info);

  for(j = 0; j < bitmapData->height; j++){

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  png_byte signature[8];





  bitmapData->ch = jpeg.out_color_components;

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){



  height = png_get_image_height(png, info);



  fo = fopen(filename, "wb");

    fclose(fi);

    return -1;

  if(bitmap->data != NULL){

  return 0;

    png_destroy_read_struct(&png, &info, NULL);

    return -1;

  struct jpeg_error_mgr err;

    fclose(fi);

  info = png_create_info_struct(png);

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);





  jpeg_start_decompress(&jpeg);

    return -1;



  }

  JSAMPLE *tmp;

  jpeg.image_width = bitmapData->width;

  struct jpeg_compress_struct jpeg;

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  int j;

  }

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

    png_destroy_write_struct(&png, &info);

  bitmapData->data =

    png_destroy_write_struct(&png, &info);

  }

  for(j = 0; j < bitmapData->height; j++){

  png_byte signature[8];

    printf("%sは開けません\n", filename);

int freeBitmapData(BITMAPDATA_t *bitmap){

  png_structp png;

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  jpeg_create_compress(&jpeg);

    return -1;

int freeBitmapData(BITMAPDATA_t *bitmap){

  }

  fo = fopen(filename, "wb");

  }





  bitmapData->data =

    jpeg_read_scanlines(&jpeg, &tmp, 1);

  jpeg_read_header(&jpeg, TRUE);

  jpeg.err = jpeg_std_error(&err);

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  }

  fi = fopen(filename, "rb");

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  } else {



    fclose(fi);

  struct jpeg_error_mgr err;

    printf("ch num is invalid!\n");

    bitmapData->ch = 3;

  int j;

  int j;

  jpeg_destroy_decompress(&jpeg);

    jpeg_read_scanlines(&jpeg, &tmp, 1);



  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

    printf("ch num is invalid!\n");



    printf("data malloc error\n");

  png_bytepp datap;

}
  jpeg_start_compress(&jpeg, TRUE);

  jpeg_set_defaults(&jpeg);

    return -1;

    printf("%sは開けません\n", filename);

  if(bitmapData->data == NULL){



  struct jpeg_decompress_struct jpeg;

}

  jpeg_create_compress(&jpeg);

    jpeg_write_scanlines(&jpeg, &address, 1);

  if(bitmapData->data == NULL){





  for(j = 0; j < jpeg.output_height; j++){

  if(fo == NULL){



  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  if(png == NULL){

  return 0;

  } else {

  if(fo == NULL){

  jpeg_start_decompress(&jpeg);

  png_byte type;



  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  if(fi == NULL){

    fclose(fi);

  jpeg_start_decompress(&jpeg);



  bitmapData->data =

  int j;

  FILE *fo;

  jpeg.in_color_space = JCS_RGB;

  png_infop info;

  for (j = 0; j < jpeg.image_height; j++ ) {

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);



    jpeg_read_scanlines(&jpeg, &tmp, 1);

  png_infop info;

    jpeg_write_scanlines(&jpeg, &address, 1);

  jpeg_stdio_dest(&jpeg, fo);

    printf("%sは開けません\n", filename);

  int j;

  jpeg_destroy_decompress(&jpeg);

  return 0;

  }

  if(fi == NULL){

  fo = fopen(filename, "wb");



  png_byte type;

  jpeg.image_width = bitmapData->width;

}

  }

    printf("png_create_read_struct error!\n");

    fclose(fi);



  jpeg.input_components = bitmapData->ch;

  }

  }

  struct jpeg_compress_struct jpeg;

  png_init_io(png, fo);

  png_bytepp datap;



}

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  type = png_get_color_type(png, info);

    png_destroy_read_struct(&png, NULL, NULL);





    printf("data malloc error\n");

    printf("data malloc error\n");



int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    printf("png_crete_info_struct error!\n");



  }



  }

  for (j = 0; j < jpeg.image_height; j++ ) {

  for(j = 0; j < jpeg.output_height; j++){



  info = png_create_info_struct(png);

  jpeg_destroy_decompress(&jpeg);

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);



int freeBitmapData(BITMAPDATA_t *bitmap){



    return -1;

    printf("data malloc error\n");

  png_byte type;

  if(png == NULL){

}

    printf("png_sig_cmp error!\n");







  jpeg_destroy_decompress(&jpeg);

  }

  jpeg_stdio_src(&jpeg, fi);

    printf("%sは開けません\n", filename);

    type = PNG_COLOR_TYPE_RGB;

  free(bitmap->data);



  jpeg_create_compress(&jpeg);

  } else if(type == PNG_COLOR_TYPE_RGBA) {

  jpeg_destroy_decompress(&jpeg);

  }

  }

  height = png_get_image_height(png, info);



  free(bitmap->data);

    printf("data malloc error\n");

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  png_destroy_read_struct(&png, &info, NULL);

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  fclose(fi);

    return -1;

  for(j = 0; j < bitmapData->height; j++){

  }

}



  bitmapData->data =

  png_set_rows(png, info, datap);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  int j;





  info = png_create_info_struct(png);

  return 0;

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  png_destroy_write_struct(&png, &info);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  }



  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);



  unsigned int width, height;

    return -1;

  struct jpeg_decompress_struct jpeg;

    jpeg_destroy_compress(&jpeg);

  jpeg_set_quality(&jpeg, 50, TRUE);

  if(fo == NULL){



  for(j = 0; j < bitmapData->height; j++){

  if(bitmapData->data == NULL){

  int j;

}

    return -1;

  }

    printf("color type is not RGB or RGBA\n");

  png_free(png, datap);





  jpeg.err = jpeg_std_error(&err);







  }

  }

  }

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

    printf("png_create_read_struct error!\n");

  fo = fopen(filename, "wb");



}





    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

  png_infop info;



  } else if(type == PNG_COLOR_TYPE_RGBA) {





  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);



  jpeg.in_color_space = JCS_RGB;

  }

  struct jpeg_error_mgr err;

    printf("png_sig_cmp error!\n");

    return -1;

  return 0;

  if(fi == NULL){

  free(bitmap->data);

  jpeg_create_decompress(&jpeg);

  jpeg.image_width = bitmapData->width;

    printf("png_sig_cmp error!\n");

    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);

  return 0;

  FILE *fi;

    fclose(fi);



  if(bitmapData->data == NULL){

  png_structp png;

}

  free(bitmap->data);



  return 0;



  png_init_io(png, fo);

  width = png_get_image_width(png, info);



int freeBitmapData(BITMAPDATA_t *bitmap){

int freeBitmapData(BITMAPDATA_t *bitmap){

  bitmapData->data =

  return 0;

  png_structp png;

  png_structp png;

    free(bitmap->data);

    return -1;

  png_destroy_read_struct(&png, &info, NULL);

    return -1;

}

  int j;

}

  png_free(png, datap);

  }



int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

    printf("png_crete_info_struct error!\n");



  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);



    png_destroy_read_struct(&png, NULL, NULL);

  return 0;



  for (j = 0; j < jpeg.image_height; j++ ) {

    return -1;

  png_infop info;

  return 0;

}

  for(j = 0; j < jpeg.output_height; j++){

  fo = fopen(filename, "wb");

    return -1;

  int j;

  fi = fopen(filename, "rb");

    printf("%sは開けません\n", filename);

  png_infop info;

  jpeg_create_decompress(&jpeg);

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  png_infop info;

  for(j = 0; j < bitmapData->height; j++){

    return -1;

int freeBitmapData(BITMAPDATA_t *bitmap){

  if(bitmap->data != NULL){



  }



  datap = png_get_rows(png, info);

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  }

  }



    bitmapData->ch = 3;

  }

  width = png_get_image_width(png, info);

  }

  struct jpeg_decompress_struct jpeg;



  png_free(png, datap);



    printf("png_sig_cmp error!\n");

    printf("png_create_read_struct error!\n");

    fclose(fi);

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  for(j = 0; j < bitmapData->height; j++){

    bitmap->data = NULL;





  struct jpeg_error_mgr err;

    fclose(fi);

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  unsigned int readSize;



    printf("png_crete_info_struct error!\n");

    fclose(fi);

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  png_byte type;



  if(bitmap->data != NULL){

  }



    png_destroy_read_struct(&png, NULL, NULL);

  FILE *fi;

  if(fo == NULL){

    jpeg_write_scanlines(&jpeg, &address, 1);

    printf("%sは開けません\n", filename);

  return 0;





    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  struct jpeg_compress_struct jpeg;

}






  jpeg.err = jpeg_std_error(&err);

    bitmapData->ch = 3;

    printf("png_crete_info_struct error!\n");

    png_free(png, datap[j]);

  }

  png_byte type;



  jpeg.image_width = bitmapData->width;

  FILE *fo;

  jpeg_set_defaults(&jpeg);

  return 0;

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  jpeg_set_defaults(&jpeg);

  png_structp png;



    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

    fclose(fi);



    fclose(fi);

    return -1;

  FILE *fi;

  }

    printf("ch num is invalid!\n");

    bitmapData->ch = 4;

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);



  png_infop info;

    fclose(fi);

  for(j = 0; j < bitmapData->height; j++){

    return -1;



  }

  bitmapData->data =

    printf("png_crete_info_struct error!\n");



  } else if(bitmapData->ch == 4) {

  jpeg.in_color_space = JCS_RGB;

    fclose(fi);

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

    jpeg_destroy_compress(&jpeg);



  if(type == PNG_COLOR_TYPE_RGB) {

  for (j = 0; j < jpeg.image_height; j++ ) {



    return -1;

  bitmapData->height = jpeg.output_height;

  int j;





  png_byte type;

int freeBitmapData(BITMAPDATA_t *bitmap){



    fclose(fi);

  png_byte type;



  }

  }



  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  type = png_get_color_type(png, info);

  } else if(bitmapData->ch == 4) {



    return -1;

  width = png_get_image_width(png, info);

  if(fo == NULL){

}

}

  png_structp png;



  }

  fi = fopen(filename, "rb");

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

}

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);

  fi = fopen(filename, "rb");

    printf("png_sig_cmp error!\n");

  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){

  if(bitmapData->data == NULL){

    printf("data malloc error\n");

  bitmapData->height = jpeg.output_height;

  bitmapData->width = width;





  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  bitmapData->ch = jpeg.out_color_components;

    return -1;

  png_init_io(png, fi);

  bitmapData->height = jpeg.output_height;

    jpeg_read_scanlines(&jpeg, &tmp, 1);

  jpeg_start_decompress(&jpeg);

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

    jpeg_read_scanlines(&jpeg, &tmp, 1);

    bitmapData->ch = 3;

  if(info == NULL){

  FILE *fo;

  jpeg_set_quality(&jpeg, 50, TRUE);

  struct jpeg_error_mgr err;

  datap = png_get_rows(png, info);



  return 0;

  return 0;

  jpeg_start_compress(&jpeg, TRUE);



    fclose(fo);

  JSAMPLE *tmp;





    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

    return -1;

  if(type == PNG_COLOR_TYPE_RGB) {

  if(bitmapData->ch == 3) {

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  jpeg_destroy_compress(&jpeg);

    png_free(png, datap[j]);

  png_free(png, datap);

  png_init_io(png, fi);



  bitmapData->width = jpeg.output_width;

  jpeg.image_height = bitmapData->height;

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  jpeg_stdio_dest(&jpeg, fo);

int freeBitmapData(BITMAPDATA_t *bitmap){



int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  struct jpeg_decompress_struct jpeg;

  if(fo == NULL){

  png_set_sig_bytes(png, readSize);





  type = png_get_color_type(png, info);

  width = png_get_image_width(png, info);

    return -1;

    type = PNG_COLOR_TYPE_RGB_ALPHA;

    printf("ch num is invalid!\n");

    return -1;

  png_byte type;

    free(bitmap->data);

  return 0;

  png_init_io(png, fi);

  struct jpeg_decompress_struct jpeg;

    memcpy(datap[j], bitmapData->data + j * bitmapData->width * bitmapData->ch, bitmapData->width * bitmapData->ch);



  fi = fopen(filename, "rb");

  free(bitmap->data);

  jpeg.err = jpeg_std_error(&err);

  png_structp png;

  fi = fopen(filename, "rb");

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

int freeBitmapData(BITMAPDATA_t *bitmap){

    return -1;

  jpeg.err = jpeg_std_error(&err);



  unsigned int width, height;



  if(bitmapData->data == NULL){

  }

    bitmap->data = NULL;



}

  png_destroy_read_struct(&png, &info, NULL);

  }

  return 0;

  fclose(fi);



  jpeg_stdio_dest(&jpeg, fo);

  jpeg_set_quality(&jpeg, 50, TRUE);

  png_byte signature[8];

  free(bitmap->data);

  }

    type = PNG_COLOR_TYPE_RGB_ALPHA;

  }

  fo = fopen(filename, "wb");

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

}

  if(bitmapData->data == NULL){

  datap = png_get_rows(png, info);

  png_init_io(png, fi);

  fo = fopen(filename, "wb");

  }

  struct jpeg_error_mgr err;

  jpeg.err = jpeg_std_error(&err);

  jpeg_create_decompress(&jpeg);

  bitmapData->width = width;

  if(bitmapData->ch == 3) {

    type = PNG_COLOR_TYPE_RGB;

  png_bytepp datap;

  jpeg.image_width = bitmapData->width;

    png_destroy_write_struct(&png, &info);

  bitmapData->ch = jpeg.out_color_components;

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  return 0;

  jpeg.err = jpeg_std_error(&err);

  jpeg_create_decompress(&jpeg);

    bitmapData->ch = 3;

  jpeg.err = jpeg_std_error(&err);

  } else {



  bitmapData->width = width;

  if(type == PNG_COLOR_TYPE_RGB) {

  jpeg_set_quality(&jpeg, 50, TRUE);

  }

    return -1;

  struct jpeg_decompress_struct jpeg;

  bitmapData->height = jpeg.output_height;

  }



int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

}

  jpeg_finish_decompress(&jpeg);



  jpeg.in_color_space = JCS_RGB;



  unsigned int readSize;

  png_infop info;



    png_destroy_read_struct(&png, &info, NULL);



    fclose(fi);



  jpeg_destroy_compress(&jpeg);



    fclose(fi);

  for(j = 0; j < jpeg.output_height; j++){

  png_bytepp datap;





  }

  width = png_get_image_width(png, info);

    fclose(fi);



    return -1;

}

  if(fi == NULL){

  fo = fopen(filename, "wb");

  if(fo == NULL){

int freeBitmapData(BITMAPDATA_t *bitmap){

  bitmapData->data =



  png_infop info;

    printf("%sは開けません\n", filename);

int freeBitmapData(BITMAPDATA_t *bitmap){

    jpeg_destroy_compress(&jpeg);

    type = PNG_COLOR_TYPE_RGB;

  png_bytepp datap;

  bitmapData->height = jpeg.output_height;

}

int freeBitmapData(BITMAPDATA_t *bitmap){

  }

    bitmapData->ch = 4;



  jpeg_set_quality(&jpeg, 50, TRUE);

    printf("data malloc error\n");

    bitmapData->ch = 4;

  height = png_get_image_height(png, info);

    return -1;

  datap = png_get_rows(png, info);

    return -1;

  jpeg_destroy_compress(&jpeg);

    return -1;

  jpeg_stdio_dest(&jpeg, fo);

  }

  bitmapData->data =

  fclose(fo);

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

    return -1;

}
  }



  jpeg.err = jpeg_std_error(&err);

  for (j = 0; j < jpeg.image_height; j++ ) {

  } else if(bitmapData->ch == 4) {

  jpeg_start_decompress(&jpeg);

  png_structp png;

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

  return 0;

}
}

  for(j = 0; j < jpeg.output_height; j++){

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  info = png_create_info_struct(png);



    printf("png_crete_info_struct error!\n");

  return 0;

    jpeg_write_scanlines(&jpeg, &address, 1);

    printf("color type is not RGB or RGBA\n");

  }

  } else if(bitmapData->ch == 4) {

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  struct jpeg_error_mgr err;

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  jpeg.input_components = bitmapData->ch;



    bitmapData->ch = 4;

  }

    fclose(fi);

    printf("color type is not RGB or RGBA\n");

  png_structp png;

  jpeg.err = jpeg_std_error(&err);

  jpeg_destroy_compress(&jpeg);

  if(bitmapData->ch == 3) {

  }

    return -1;



  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

    printf("color type is not RGB or RGBA\n");



    return -1;



  info = png_create_info_struct(png);

  jpeg_create_decompress(&jpeg);



  return 0;





  unsigned int width, height;

    return -1;

  png_bytepp datap;

    printf("color type is not RGB or RGBA\n");





  if(png == NULL){

  bitmapData->width = jpeg.output_width;



    bitmap->data = NULL;

  if(type == PNG_COLOR_TYPE_RGB) {

  jpeg_start_compress(&jpeg, TRUE);

  jpeg_stdio_dest(&jpeg, fo);

}

  fclose(fi);

  }

  bitmapData->ch = jpeg.out_color_components;

  }

  FILE *fi;

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  fclose(fo);



  bitmapData->ch = jpeg.out_color_components;

    return -1;

    return -1;

    free(bitmap->data);

  png_destroy_write_struct(&png, &info);



    jpeg_write_scanlines(&jpeg, &address, 1);

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

    fclose(fi);

  png_byte type;

  int j;

  jpeg.input_components = bitmapData->ch;

  }

  fi = fopen(filename, "rb");

  free(bitmap->data);

  png_byte type;

  if(fi == NULL){



    return -1;

    return -1;

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  } else {



  }

  }



  } else {



  }

  jpeg_finish_decompress(&jpeg);

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

int freeBitmapData(BITMAPDATA_t *bitmap){



    printf("%sは開けません\n", filename);

  jpeg_stdio_src(&jpeg, fi);



  struct jpeg_compress_struct jpeg;



  height = png_get_image_height(png, info);

  fo = fopen(filename, "wb");

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  }

  if(fi == NULL){

  if(fi == NULL){





  jpeg_stdio_dest(&jpeg, fo);

  return 0;

  }

    jpeg_destroy_compress(&jpeg);

  width = png_get_image_width(png, info);



  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  type = png_get_color_type(png, info);

    bitmapData->ch = 4;

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  bitmapData->data =



  bitmapData->width = width;



  bitmapData->ch = jpeg.out_color_components;

    return -1;

  if(bitmapData->data == NULL){

  png_init_io(png, fo);

  png_byte signature[8];

    printf("color type is not RGB or RGBA\n");

  bitmapData->height = height;

  FILE *fi;

    printf("png_sig_cmp error!\n");

  for (j = 0; j < jpeg.image_height; j++ ) {



  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){

  if(png == NULL){



  png_infop info;

  jpeg_finish_compress(&jpeg);

  png_structp png;

  bitmapData->height = jpeg.output_height;

    printf("png_create_read_struct error!\n");

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  if(bitmapData->data == NULL){





  height = png_get_image_height(png, info);

  bitmapData->ch = jpeg.out_color_components;

  for(j = 0; j < bitmapData->height; j++){

    return -1;



  jpeg.image_height = bitmapData->height;

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  FILE *fo;

  return 0;

  }

    return -1;

  jpeg_read_header(&jpeg, TRUE);

  } else {



  png_destroy_write_struct(&png, &info);

  jpeg.err = jpeg_std_error(&err);



}



    png_free(png, datap[j]);

int freeBitmapData(BITMAPDATA_t *bitmap){

    return -1;





  if(png == NULL){

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  fclose(fi);

  int j;

    bitmapData->ch = 3;



  png_byte type;

    return -1;



  info = png_create_info_struct(png);

  int j;

    printf("color type is not RGB or RGBA\n");

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  jpeg_set_defaults(&jpeg);

  jpeg.input_components = bitmapData->ch;

    printf("color type is not RGB or RGBA\n");



  FILE *fi;

  png_set_sig_bytes(png, readSize);

  }

    printf("%sは開けません\n", filename);

    return -1;

  jpeg.err = jpeg_std_error(&err);

  png_set_rows(png, info, datap);

  int j;

    return -1;

int freeBitmapData(BITMAPDATA_t *bitmap){

  if(fo == NULL){



  jpeg_destroy_decompress(&jpeg);

  fclose(fi);

    return -1;

  struct jpeg_decompress_struct jpeg;

  for(j = 0; j < jpeg.output_height; j++){



  }

  bitmapData->ch = jpeg.out_color_components;

    fclose(fi);

    bitmapData->ch = 4;

  fi = fopen(filename, "rb");

    printf("png_sig_cmp error!\n");

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

    datap[j] = png_malloc(png, bitmapData->width * bitmapData->ch);

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

    bitmapData->ch = 4;

  if(bitmapData->data == NULL){

  bitmapData->ch = jpeg.out_color_components;

    jpeg_destroy_decompress(&jpeg);



  png_set_sig_bytes(png, readSize);

    jpeg_write_scanlines(&jpeg, &address, 1);

  }



  fclose(fo);

  bitmapData->data =



    fclose(fi);

  }

  }

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  if(bitmap->data != NULL){



    return -1;

  jpeg.in_color_space = JCS_RGB;

  }

    return -1;

  if(type == PNG_COLOR_TYPE_RGB) {

  }

  struct jpeg_error_mgr err;

  jpeg_finish_compress(&jpeg);

  png_byte type;

  for(j = 0; j < bitmapData->height; j++){

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  return 0;

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

    printf("data malloc error\n");

  png_set_sig_bytes(png, readSize);

  height = png_get_image_height(png, info);

    printf("%sは開けません\n", filename);

  png_structp png;

    fclose(fi);

  if(bitmapData->data == NULL){

    png_destroy_read_struct(&png, &info, NULL);

    printf("ch num is invalid!\n");

  bitmapData->data =

  FILE *fo;

  }

  jpeg_stdio_dest(&jpeg, fo);

    type = PNG_COLOR_TYPE_RGB;

  unsigned int readSize;



  jpeg.input_components = bitmapData->ch;

int freeBitmapData(BITMAPDATA_t *bitmap){



  struct jpeg_error_mgr err;

  return 0;

  int j;



    bitmapData->ch = 4;

  png_byte type;

  struct jpeg_error_mgr err;

  png_byte type;

  int j;

int pngFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){



  return 0;

  }

  for (j = 0; j < jpeg.image_height; j++ ) {

    png_destroy_read_struct(&png, &info, NULL);

}
  int j;

  }

  bitmapData->ch = jpeg.out_color_components;

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  int j;



  }



  }

  fi = fopen(filename, "rb");

  png_byte signature[8];

    return -1;

  }

  jpeg_start_decompress(&jpeg);

  }

  } else if(type == PNG_COLOR_TYPE_RGBA) {

  return 0;

  png_bytepp datap;

  return 0;



    type = PNG_COLOR_TYPE_RGB;



    fclose(fi);

  for(j = 0; j < jpeg.output_height; j++){



  if(fo == NULL){



  }



  if(bitmap->data != NULL){

    jpeg_destroy_decompress(&jpeg);

  struct jpeg_decompress_struct jpeg;

    return -1;

  }

  png_init_io(png, fo);

  jpeg_start_compress(&jpeg, TRUE);

  png_set_sig_bytes(png, readSize);

  type = png_get_color_type(png, info);



    png_destroy_write_struct(&png, &info);

  } else if(bitmapData->ch == 4) {

  }

    fclose(fi);

  jpeg_start_compress(&jpeg, TRUE);

  }

  png_byte type;



  fo = fopen(filename, "wb");

  int j;

  bitmapData->data =

  }

}



  if(bitmapData->data == NULL){

  bitmapData->width = jpeg.output_width;

  if(bitmap->data != NULL){



  }

    return -1;

}

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;



  png_byte type;

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);



  png_infop info;



  JSAMPLE *tmp;

  jpeg_destroy_decompress(&jpeg);

    type = PNG_COLOR_TYPE_RGB_ALPHA;

  int j;

  int j;

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  jpeg_set_quality(&jpeg, 50, TRUE);

    jpeg_write_scanlines(&jpeg, &address, 1);

    fclose(fi);

    printf("data malloc error\n");

  png_byte signature[8];

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  bitmapData->data =

    fclose(fi);

    jpeg_write_scanlines(&jpeg, &address, 1);

  datap = png_get_rows(png, info);

  bitmapData->width = width;



  jpeg_finish_decompress(&jpeg);

  return 0;

  return 0;

    fclose(fi);

    fclose(fi);

  return 0;

  return 0;

  fclose(fo);

  int j;









  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);

  struct jpeg_compress_struct jpeg;

  png_free(png, datap);

  int j;





  struct jpeg_error_mgr err;

    return -1;

  int j;

    return -1;



  jpeg.input_components = bitmapData->ch;

  }

    printf("png_create_read_struct error!\n");

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  png_destroy_write_struct(&png, &info);

    return -1;



  struct jpeg_compress_struct jpeg;

  bitmapData->width = width;

  }



  bitmapData->height = jpeg.output_height;

  if(fi == NULL){



  int j;

    return -1;

    fclose(fi);

  if(bitmapData->data == NULL){

  jpeg.input_components = bitmapData->ch;



    printf("data malloc error\n");

  unsigned int readSize;

  }

  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){

  return 0;



}

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

    printf("png_create_read_struct error!\n");

  }

  jpeg_finish_decompress(&jpeg);

  int j;

  fi = fopen(filename, "rb");

  if(fi == NULL){

  FILE *fo;

  int j;

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  return 0;

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  }

  type = png_get_color_type(png, info);

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  jpeg_set_quality(&jpeg, 50, TRUE);

  }

  if(bitmapData->data == NULL){

    png_free(png, datap[j]);



    return -1;

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){

  return 0;



  unsigned int readSize;





    jpeg_destroy_compress(&jpeg);



  jpeg.input_components = bitmapData->ch;







  }

int freeBitmapData(BITMAPDATA_t *bitmap){



  JSAMPLE *tmp;

    return -1;





    printf("%sは開けません\n", filename);

  FILE *fi;

  if(bitmapData->data == NULL){

  png_structp png;

  fclose(fi);

  fi = fopen(filename, "rb");

  bitmapData->ch = jpeg.out_color_components;

  jpeg_stdio_src(&jpeg, fi);

  }

  jpeg_read_header(&jpeg, TRUE);





    return -1;

  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  }



  if(bitmapData->data == NULL){

    return -1;



    fclose(fi);

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);

    return -1;







  }

  if(info == NULL){



int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  type = png_get_color_type(png, info);

  JSAMPLE *tmp;

    return -1;

    fclose(fi);

  }

  height = png_get_image_height(png, info);

    png_destroy_write_struct(&png, &info);

  height = png_get_image_height(png, info);

    printf("%sは開けません\n", filename);

    return -1;

  png_set_sig_bytes(png, readSize);



    type = PNG_COLOR_TYPE_RGB_ALPHA;

  bitmapData->height = height;

  }

    free(bitmap->data);

    png_destroy_write_struct(&png, &info);

  jpeg.in_color_space = JCS_RGB;

}

  datap = png_get_rows(png, info);

  }

  if(fi == NULL){

  jpeg_read_header(&jpeg, TRUE);



  struct jpeg_compress_struct jpeg;

  int j;

    return -1;

  jpeg_stdio_src(&jpeg, fi);

  datap = png_get_rows(png, info);

  jpeg_stdio_src(&jpeg, fi);

  bitmapData->data =



    return -1;

  }





  bitmapData->width = jpeg.output_width;

  jpeg.in_color_space = JCS_RGB;

    fclose(fi);

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  for(j = 0; j < bitmapData->height; j++){



  jpeg.input_components = bitmapData->ch;

    printf("png_create_read_struct error!\n");

  jpeg_create_decompress(&jpeg);

  for(j = 0; j < bitmapData->height; j++){

    fclose(fi);







    free(bitmap->data);

  png_byte signature[8];

  png_byte signature[8];

  FILE *fi;

  struct jpeg_error_mgr err;

  png_set_sig_bytes(png, readSize);



  }



}

    address = bitmapData->data + (j * bitmapData->width * bitmapData->ch);

    return -1;

  width = png_get_image_width(png, info);

    bitmapData->ch = 3;

  png_byte type;

  png_structp png;

  bitmapData->height = height;

  png_destroy_read_struct(&png, &info, NULL);

  width = png_get_image_width(png, info);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    return -1;

    png_destroy_read_struct(&png, &info, NULL);

  png_set_sig_bytes(png, readSize);

    png_destroy_read_struct(&png, NULL, NULL);

  png_bytepp datap;

  return 0;

  png_byte type;



    fclose(fi);

    return -1;

    fclose(fi);

  }

}

    printf("%sは開けません\n", filename);





  png_byte signature[8];

  }

}

  fi = fopen(filename, "rb");

int jpegFileEncodeWrite(BITMAPDATA_t *bitmapData, const char *filename){

  JSAMPLE *address;

    png_destroy_read_struct(&png, &info, NULL);

    printf("color type is not RGB or RGBA\n");

    return -1;

  FILE *fi;

    free(bitmap->data);

    return -1;

  png_infop info;

  jpeg.err = jpeg_std_error(&err);

  png_structp png;

  height = png_get_image_height(png, info);

  jpeg_destroy_compress(&jpeg);

  if(bitmap->data != NULL){

  struct jpeg_decompress_struct jpeg;

  jpeg.input_components = bitmapData->ch;



  jpeg.image_width = bitmapData->width;

    return -1;



    printf("png_sig_cmp error!\n");

  png_structp png;



    fclose(fi);

  fo = fopen(filename, "wb");

    bitmapData->ch = 3;

  datap = png_get_rows(png, info);



  for(j = 0; j < jpeg.output_height; j++){

    fclose(fi);

  bitmapData->height = height;

}

  return 0;

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  } else {

    fclose(fo);



    type = PNG_COLOR_TYPE_RGB;

    png_destroy_read_struct(&png, &info, NULL);

int jpegFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

  jpeg_read_header(&jpeg, TRUE);

  jpeg_start_compress(&jpeg, TRUE);

  fo = fopen(filename, "wb");



  return 0;



    return -1;

  if(bitmapData->ch == 3) {

  FILE *fo;

    fclose(fi);

  png_structp png;

  } else if(bitmapData->ch == 4) {

    fclose(fi);

  height = png_get_image_height(png, info);

    png_free(png, datap[j]);

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

    fclose(fi);

  jpeg_destroy_compress(&jpeg);

  bitmapData->height = height;

  struct jpeg_decompress_struct jpeg;

  return 0;





  png_infop info;

  png_destroy_read_struct(&png, &info, NULL);





    return -1;

int freeBitmapData(BITMAPDATA_t *bitmap){

  JSAMPLE *tmp;

  bitmapData->ch = jpeg.out_color_components;



  datap = png_malloc(png, sizeof(png_bytep) * bitmapData->height);

  FILE *fo;

  bitmapData->ch = jpeg.out_color_components;



    printf("data malloc error\n");

  if(png == NULL){





  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  jpeg_destroy_compress(&jpeg);

  png_destroy_read_struct(&png, &info, NULL);



  FILE *fi;

    fclose(fi);

  for(j = 0; j < bitmapData->height; j++){



    return -1;

    return -1;

  fo = fopen(filename, "wb");

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);





    png_free(png, datap[j]);

  jpeg_destroy_compress(&jpeg);

  type = png_get_color_type(png, info);

  png_set_IHDR(png, info, bitmapData->width, bitmapData->height, 8, type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);





  jpeg_stdio_dest(&jpeg, fo);



  png_byte type;

  }

  jpeg_start_decompress(&jpeg);

  png_init_io(png, fi);

}

    bitmapData->ch = 4;

    return -1;

  struct jpeg_error_mgr err;

int freeBitmapData(BITMAPDATA_t *bitmap){

  FILE *fi;

  jpeg_create_compress(&jpeg);

  bitmapData->height = height;

  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){

  if(png_sig_cmp(signature, 0, SIGNATURE_NUM)){



  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);

  jpeg_stdio_src(&jpeg, fi);

  if(bitmap->data != NULL){

  png_free(png, datap);



  jpeg_create_decompress(&jpeg);

  bitmapData->height = height;

  type = png_get_color_type(png, info);

    return -1;

  if(bitmapData->data == NULL){



  png_structp png;

  if(fo == NULL){

  fclose(fo);



  fi = fopen(filename, "rb");

  jpeg_set_quality(&jpeg, 50, TRUE);

  info = png_create_info_struct(png);

  free(bitmap->data);

    printf("png_create_read_struct error!\n");

  fi = fopen(filename, "rb");

  png_byte type;



    png_destroy_read_struct(&png, NULL, NULL);

    memcpy(bitmapData->data + j * bitmapData->width * bitmapData->ch, datap[j], bitmapData->width * bitmapData->ch);

  jpeg.err = jpeg_std_error(&err);



  fclose(fi);

    png_destroy_write_struct(&png, &info);

  struct jpeg_error_mgr err;

  for(j = 0; j < bitmapData->height; j++){

int pngFileReadDecode(BITMAPDATA_t *bitmapData, const char* filename){

    type = PNG_COLOR_TYPE_RGB_ALPHA;

  fi = fopen(filename, "rb");

    tmp = bitmapData->data + j * jpeg.out_color_components * jpeg.output_width;

  return 0;



  png_bytepp datap;

  }

    return -1;

    printf("%sは開けません\n", filename);





  jpeg_set_quality(&jpeg, 50, TRUE);

}

    return -1;

  png_bytepp datap;

}

  jpeg_read_header(&jpeg, TRUE);



  }



    return -1;

  fi = fopen(filename, "rb");



    fclose(fi);

    return -1;

}



  JSAMPLE *address;

  struct jpeg_error_mgr err;

  }



  datap = png_get_rows(png, info);



  png_init_io(png, fi);

int freeBitmapData(BITMAPDATA_t *bitmap){

    bitmapData->ch = 3;

  FILE *fo;

    png_destroy_read_struct(&png, &info, NULL);

  struct jpeg_error_mgr err;

    png_destroy_read_struct(&png, NULL, NULL);

    fclose(fi);

  bitmapData->width = jpeg.output_width;

  if(fi == NULL){

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);



  unsigned int width, height;



  png_infop info;

int freeBitmapData(BITMAPDATA_t *bitmap){



  if(bitmapData->ch == 3) {

    printf("%sは開けません\n", filename);





  png_structp png;

  if(type == PNG_COLOR_TYPE_RGB) {

    return -1;

    return -1;

    return -1;



  jpeg_start_decompress(&jpeg);



  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  fo = fopen(filename, "wb");

    printf("color type is not RGB or RGBA\n");

}

  if(fo == NULL){

  JSAMPLE *address;

  bitmapData->data =

  for(j = 0; j < bitmapData->height; j++){

    printf("data malloc error\n");

  for(j = 0; j < bitmapData->height; j++){

    return -1;

  }







  bitmapData->width = jpeg.output_width;

    png_destroy_read_struct(&png, NULL, NULL);



    return -1;

    printf("png_crete_info_struct error!\n");

  png_structp png;







  } else {

  png_infop info;

  png_destroy_read_struct(&png, &info, NULL);

  fo = fopen(filename, "wb");

  printf("width = %d, height = %d, ch = %d\n", bitmapData->width, bitmapData->height, bitmapData->ch);

  struct jpeg_decompress_struct jpeg;

    printf("%sは開けません\n", filename);

  jpeg.err = jpeg_std_error(&err);

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);

  jpeg_set_quality(&jpeg, 50, TRUE);



  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  }

  }

  } else if(bitmapData->ch == 4) {

    return -1;

  fclose(fi);

    return -1;

  return 0;



  }

    return -1;

    return -1;

  int j;

  JSAMPLE *tmp;

  png_structp png;

  if(fi == NULL){

  fo = fopen(filename, "wb");

  jpeg_finish_compress(&jpeg);

int freeBitmapData(BITMAPDATA_t *bitmap){

  }

    bitmap->data = NULL;

    (unsigned char*)malloc(sizeof(unsigned char) * bitmapData->width * bitmapData->height * bitmapData->ch);



  int j;

  if(fi == NULL){

  struct jpeg_compress_struct jpeg;

  jpeg_start_compress(&jpeg, TRUE);

  fo = fopen(filename, "wb");

  return 0;



    type = PNG_COLOR_TYPE_RGB;

    printf("color type is not RGB or RGBA\n");

  bitmapData->width = jpeg.output_width;



  png_init_io(png, fo);

    fclose(fi);

  datap = png_get_rows(png, info);





  }





  }

  png_destroy_write_struct(&png, &info);

    fclose(fi);

  fclose(fo);

  png_destroy_read_struct(&png, &info, NULL);

  if(bitmapData->ch == 3) {



  jpeg.err = jpeg_std_error(&err);

  }

    return -1;

    return -1;

  FILE *fi;

  jpeg.image_width = bitmapData->width;

  datap = png_get_rows(png, info);

    jpeg_destroy_compress(&jpeg);

  return 0;

  jpeg.image_height = bitmapData->height;

  }

  FILE *fo;



  printf("width = %d, height = %d, ch = %d\n", jpeg.output_width, jpeg.output_height, jpeg.out_color_components);

  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  jpeg.image_width = bitmapData->width;

  png_free(png, datap);

  jpeg.in_color_space = JCS_RGB;

  fo = fopen(filename, "wb");

  }

  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  fo = fopen(filename, "wb");



  bitmapData->width = width;

  fo = fopen(filename, "wb");





  jpeg_set_defaults(&jpeg);

    printf("data malloc error\n");

  fo = fopen(filename, "wb");

  jpeg.image_width = bitmapData->width;

    fclose(fi);

  }

  png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

  if(fi == NULL){

    printf("color type is not RGB or RGBA\n");

  struct jpeg_compress_struct jpeg;

  bitmapData->width = jpeg.output_width;

  jpeg.image_height = bitmapData->height;

  return 0;

  }

  readSize = fread(signature, 1, SIGNATURE_NUM, fi);

  png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    fclose(fi);

  png_destroy_write_struct(&png, &info);

    printf("png_crete_info_struct error!\n");

  bitmapData->ch = jpeg.out_color_components;

  if(bitmap->data != NULL){

  int j;

  }

  struct jpeg_decompress_struct jpeg;

  return 0;

  png_byte signature[8];

  png_byte type;

  } else if(bitmapData->ch == 4) {

}


  png_set_sig_bytes(png, readSize);



    fclose(fi);



  if(bitmapData->data == NULL){

  jpeg_stdio_dest(&jpeg, fo);



  return 0;

  if(type != PNG_COLOR_TYPE_RGB && type != PNG_COLOR_TYPE_RGB_ALPHA){



    return -1;

  width = png_get_image_width(png, info);

  return 0;



  png_byte type;

    type = PNG_COLOR_TYPE_RGB_ALPHA;

  datap = png_get_rows(png, info);

  jpeg_start_decompress(&jpeg);

    fclose(fi);

    jpeg_destroy_decompress(&jpeg);

    png_destroy_read_struct(&png, &info, NULL);

    fclose(fi);



  png_write_png(png, info, PNG_TRANSFORM_IDENTITY, NULL);

  }

  if(bitmap->data != NULL){

    printf("%sは開けません\n", filename);

  unsigned int width, height;



    png_free(png, datap[j]);

  } else {

    png_free(png, datap[j]);

  fo = fopen(filename, "wb");

    return -1;



  fi = fopen(filename, "rb");

  unsigned int width, height;

  return 0;



  }

  jpeg.err = jpeg_std_error(&err);

    fclose(fi);

  info = png_create_info_struct(png);

  FILE *fo;

  jpeg_set_defaults(&jpeg);

    printf("%sは開けません\n", filename);

  png_byte signature[8];

    return -1;



  if(fo == NULL){

    printf("png_create_read_struct error!\n");

  }



  if(fo == NULL){

    fclose(fi);

  struct jpeg_error_mgr err;



    (unsigned char*)malloc(sizeof(unsigned char) * jpeg.output_width * jpeg.output_height * jpeg.out_color_components);



  png_read_png(png, info, PNG_TRANSFORM_PACKING | PNG_TRANSFORM_STRIP_16, NULL);

  bitmapData->data =

    return -1;


