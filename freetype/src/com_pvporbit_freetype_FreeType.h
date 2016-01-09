/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pvporbit_freetype_FreeType */

#ifndef _Included_com_pvporbit_freetype_FreeType
#define _Included_com_pvporbit_freetype_FreeType
#ifdef __cplusplus
extern "C" {
#endif
#undef com_pvporbit_freetype_FreeType_FT_LOAD_DEFAULT
#define com_pvporbit_freetype_FreeType_FT_LOAD_DEFAULT 0L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_NO_SCALE
#define com_pvporbit_freetype_FreeType_FT_LOAD_NO_SCALE 1L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_NO_HINTING
#define com_pvporbit_freetype_FreeType_FT_LOAD_NO_HINTING 2L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_RENDER
#define com_pvporbit_freetype_FreeType_FT_LOAD_RENDER 4L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_NO_BITMAP
#define com_pvporbit_freetype_FreeType_FT_LOAD_NO_BITMAP 8L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_VERTICAL_LAYOUT
#define com_pvporbit_freetype_FreeType_FT_LOAD_VERTICAL_LAYOUT 16L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT
#define com_pvporbit_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT 32L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_CROP_BITMAP
#define com_pvporbit_freetype_FreeType_FT_LOAD_CROP_BITMAP 64L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_PEDANTIC
#define com_pvporbit_freetype_FreeType_FT_LOAD_PEDANTIC 128L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH
#define com_pvporbit_freetype_FreeType_FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH 512L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_NO_RECURSE
#define com_pvporbit_freetype_FreeType_FT_LOAD_NO_RECURSE 1024L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_IGNORE_TRANSFORM
#define com_pvporbit_freetype_FreeType_FT_LOAD_IGNORE_TRANSFORM 2048L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_MONOCHROME
#define com_pvporbit_freetype_FreeType_FT_LOAD_MONOCHROME 4096L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_LINEAR_DESIGN
#define com_pvporbit_freetype_FreeType_FT_LOAD_LINEAR_DESIGN 8192L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_NO_AUTOHINT
#define com_pvporbit_freetype_FreeType_FT_LOAD_NO_AUTOHINT 32768L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_COLOR
#define com_pvporbit_freetype_FreeType_FT_LOAD_COLOR 1048576L
#undef com_pvporbit_freetype_FreeType_FT_LOAD_COMPUTE_METRICS
#define com_pvporbit_freetype_FreeType_FT_LOAD_COMPUTE_METRICS 2097152L
/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Init_FreeType
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Init_1FreeType
  (JNIEnv *, jclass);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Done_FreeType
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Done_1FreeType
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_ascender
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1ascender
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_descender
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1descender
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_face_flags
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1face_1flags
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_face_index
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1face_1index
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_family_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1family_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_heigth
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1heigth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_max_advance_height
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1max_1advance_1height
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_max_advance_width
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1max_1advance_1width
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_num_faces
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1num_1faces
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_num_glyphs
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1num_1glyphs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_style_flags
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1style_1flags
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_style_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1style_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_underline_position
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1underline_1position
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_underline_thickness
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1underline_1thickness
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_units_per_EM
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1units_1per_1EM
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_Kerning
 * Signature: (JCCI)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1Kerning
  (JNIEnv *, jclass, jlong, jchar, jchar, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_KerningX
 * Signature: (JCCI)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1KerningX
  (JNIEnv *, jclass, jlong, jchar, jchar, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_KerningY
 * Signature: (JCCI)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1KerningY
  (JNIEnv *, jclass, jlong, jchar, jchar, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_glyph
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1glyph
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1size
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_New_Memory_Face
 * Signature: (JLjava/nio/ByteBuffer;II)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1New_1Memory_1Face
  (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Done_Face
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Done_1Face
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Get_Char_Index
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Get_1Char_1Index
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_HAS_KERNING
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pvporbit_freetype_FreeType_FT_1HAS_1KERNING
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Select_Size
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Select_1Size
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Set_Char_Size
 * Signature: (JIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Set_1Char_1Size
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Load_Glyph
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Load_1Glyph
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Set_Pixel_Sizes
 * Signature: (JFF)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Set_1Pixel_1Sizes
  (JNIEnv *, jclass, jlong, jfloat, jfloat);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Load_Char
 * Signature: (JCI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Load_1Char
  (JNIEnv *, jclass, jlong, jchar, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_linearHoriAdvance
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1linearHoriAdvance
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_linearVertAdvance
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1linearVertAdvance
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_advance
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1advance
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_advanceX
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1advanceX
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_advanceY
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1advanceY
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_format
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1format
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_bitmap
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1bitmap
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_bitmap_left
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1bitmap_1left
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_bitmap_top
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1bitmap_1top
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_GlyphSlot_Get_metrics
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1GlyphSlot_1Get_1metrics
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Render_Glyph
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Render_1Glyph
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Glyph_Metrics_Get_width
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Glyph_1Metrics_1Get_1width
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Glyph_Metrics_Get_height
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Glyph_1Metrics_1Get_1height
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Glyph_Metrics_Get_horiAdvance
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Glyph_1Metrics_1Get_1horiAdvance
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Glyph_Metrics_Get_vertAdvance
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Glyph_1Metrics_1Get_1vertAdvance
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Glyph_Metrics_Get_horiBearingX
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Glyph_1Metrics_1Get_1horiBearingX
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Glyph_Metrics_Get_horiBearingY
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Glyph_1Metrics_1Get_1horiBearingY
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Glyph_Metrics_Get_vertBearingX
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Glyph_1Metrics_1Get_1vertBearingX
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Glyph_Metrics_Get_vertBearingY
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Glyph_1Metrics_1Get_1vertBearingY
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Bitmap_Get_width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Bitmap_1Get_1width
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Bitmap_Get_rows
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Bitmap_1Get_1rows
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Bitmap_Get_pitch
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Bitmap_1Get_1pitch
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Bitmap_Get_num_grays
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Bitmap_1Get_1num_1grays
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Bitmap_Get_palette_mode
 * Signature: (J)C
 */
JNIEXPORT jchar JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Bitmap_1Get_1palette_1mode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Bitmap_Get_pixel_mode
 * Signature: (J)C
 */
JNIEXPORT jchar JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Bitmap_1Get_1pixel_1mode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pvporbit_freetype_FreeType
 * Method:    FT_Bitmap_Get_buffer
 * Signature: (J)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_pvporbit_freetype_FreeType_FT_1Bitmap_1Get_1buffer
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
