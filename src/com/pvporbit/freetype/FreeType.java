package com.pvporbit.freetype;

import java.nio.ByteBuffer;

public class FreeType {

	/* FreeType functions */

	// Library
	public static native long    FT_Init_FreeType();
	public static native boolean FT_Done_FreeType(long library); 
	
	// Face
	public static native short FT_Get_ascender(long face);
	public static native short FT_Get_descender(long face);
	public static native long FT_Get_face_flags(long face);
	public static native long FT_Get_face_index(long face);
	public static native String FT_Get_family_name(long face);
	public static native short FT_Get_heigth(long face);
	public static native short FT_Get_max_advance_height(long face);
	public static native short FT_Get_max_advance_width(long face);
	public static native long FT_Get_num_faces(long face);
	public static native long FT_Get_num_glyphs(long face);
	public static native long FT_Get_style_flags(long face);
	public static native String FT_Get_style_name(long face);
	public static native short FT_Get_underline_position(long face);
	public static native short FT_Get_underline_thickness(long face);
	public static native short FT_Get_units_per_EM(long face);
	public static native long[] FT_Get_Kerning(long face, char left, char right, int mode); // [x, y]
	public static native long FT_Get_KerningX(long face, char left, char right, int mode);
	public static native long FT_Get_KerningY(long face, char left, char right, int mode);
	public static native long FT_Get_glyph(long face); // Pointer to FT_GlyphSlot
	public static native long FT_Get_size(long face); // Pointer to FT_Size TODO
	
	public static native long FT_New_Memory_Face(long library, ByteBuffer data, int length, int faceIndex);
	public static native boolean FT_Done_Face(long face);
	public static native int FT_Get_Char_Index(long face, int code);
	public static native boolean FT_HAS_KERNING(long face);
	public static native boolean FT_Select_Size(long face, int strikeIndex);
	public static native boolean FT_Set_Char_Size(long face, int char_width, int char_height, int horz_resolution, int vert_resolution);
	public static native boolean FT_Load_Glyph(long face, int glyphIndex, int loadFlags);
	public static native boolean FT_Set_Pixel_Sizes(long face, float width, float height);
	public static native boolean FT_Load_Char(long face, char c, int flags);

	// GlyphSlot
	public static native long    FT_GlyphSlot_Get_linearHoriAdvance(long glyphSlot);
	public static native long    FT_GlyphSlot_Get_linearVertAdvance(long glyphSlot);
	public static native long[]  FT_GlyphSlot_Get_advance          (long glyphSlot);
	public static native long    FT_GlyphSlot_Get_advanceX         (long glyphSlot);
	public static native long    FT_GlyphSlot_Get_advanceY         (long glyphSlot);
	public static native int     FT_GlyphSlot_Get_format           (long glyphSlot);
	public static native long    FT_GlyphSlot_Get_bitmap           (long glyphSlot); // Pointer to Bitmap
	public static native int     FT_GlyphSlot_Get_bitmap_left      (long glyphSlot);
	public static native int     FT_GlyphSlot_Get_bitmap_top       (long glyphSlot);
	public static native long    FT_GlyphSlot_Get_metrics          (long glyphSlot); // Pointer to GlyphMetrics

	public static native boolean FT_Render_Glyph                   (long glyphSlot, int renderMode); // Pointer to Glyph
	
	// GlyphMetrics - DONE
	public static native long FT_Glyph_Metrics_Get_width       (long glyphMetrics);
	public static native long FT_Glyph_Metrics_Get_height      (long glyphMetrics);
	public static native long FT_Glyph_Metrics_Get_horiAdvance (long glyphMetrics);
	public static native long FT_Glyph_Metrics_Get_vertAdvance (long glyphMetrics);
	public static native long FT_Glyph_Metrics_Get_horiBearingX(long glyphMetrics);
	public static native long FT_Glyph_Metrics_Get_horiBearingY(long glyphMetrics);
	public static native long FT_Glyph_Metrics_Get_vertBearingX(long glyphMetrics);
	public static native long FT_Glyph_Metrics_Get_vertBearingY(long glyphMetrics);
	
	// Bitmap - DONE
	public static native int        FT_Bitmap_Get_width       (long bitmap);
	public static native int        FT_Bitmap_Get_rows        (long bitmap);
	public static native int        FT_Bitmap_Get_pitch       (long bitmap);
	public static native short      FT_Bitmap_Get_num_grays	  (long bitmap);
	public static native char       FT_Bitmap_Get_palette_mode(long bitmap);
	public static native char       FT_Bitmap_Get_pixel_mode  (long bitmap);
	public static native ByteBuffer FT_Bitmap_Get_buffer	  (long bitmap);
	
	// Glyph
	// Implemented ↑ | TODO ↓
	
	
	/* Java Object functions */

	public static Library newLibrary() {
		long library = FT_Init_FreeType();
		if (library != 0)
			return new Library(library);
		return null;
	}

	/* FreeType constants */

	public static enum FT_Render_Mode {
	    FT_RENDER_MODE_NORMAL,
	    FT_RENDER_MODE_LIGHT,
	    FT_RENDER_MODE_MONO,
	    FT_RENDER_MODE_LCD,
	    FT_RENDER_MODE_LCD_V,

	    FT_RENDER_MODE_MAX
	}
	
	// http://www.freetype.org/freetype2/docs/reference/ft2-base_interface.html#FT_LOAD_XXX
	public static final int FT_LOAD_DEFAULT = 0x0;
	public static final int FT_LOAD_NO_SCALE = (1 << 0);
	public static final int FT_LOAD_NO_HINTING = (1 << 1);
	public static final int FT_LOAD_RENDER = (1 << 2);
	public static final int FT_LOAD_NO_BITMAP = (1 << 3);
	public static final int FT_LOAD_VERTICAL_LAYOUT = (1 << 4);
	public static final int FT_LOAD_FORCE_AUTOHINT = (1 << 5);
	public static final int FT_LOAD_CROP_BITMAP = (1 << 6);
	public static final int FT_LOAD_PEDANTIC = (1 << 7);
	public static final int FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH = (1 << 9);
	public static final int FT_LOAD_NO_RECURSE = (1 << 10);
	public static final int FT_LOAD_IGNORE_TRANSFORM = (1 << 11);
	public static final int FT_LOAD_MONOCHROME = (1 << 12);
	public static final int FT_LOAD_LINEAR_DESIGN = (1 << 13);
	public static final int FT_LOAD_NO_AUTOHINT = (1 << 15);
	/* Bits 16..19 are used by `FT_LOAD_TARGET_' */
	public static final int FT_LOAD_COLOR = (1 << 20);
	public static final int FT_LOAD_COMPUTE_METRICS = (1 << 21);
	
	static { // Horrible method to load the library, but w/e.
		try {
			if (System.getProperty("os.name").toLowerCase().indexOf("win") >= 0) {
				int bits = 86;
				if (System.getProperty("os.arch").contains("64"))
					bits = 64;
				System.loadLibrary("freetype26MT_x" + bits);
			} else
				throw new Exception("Operating system not supported.");
		} catch (UnsatisfiedLinkError e) {
			System.err.println("Can't find the native file for FreeType-jni.");
			throw e;
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}