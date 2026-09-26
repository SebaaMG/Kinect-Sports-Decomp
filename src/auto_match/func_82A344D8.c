typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82A38678();
extern int fn_82A38700();
extern int fn_82A38AA0();
extern int fn_82A38AD8();
extern int fn_82A38C08();
extern int fn_82A38C78();
extern int fn_82A38DE0();
extern int fn_82A38F00();
extern int fn_82A38FB0();
extern int fn_82A39078();
extern int fn_82A39170();
extern unsigned int lbl_8315D3D0;


void fn_82A344D8(undefined4 *param_1)

{
  param_1[1] = fn_82A39170;
  param_1[2] = fn_82A39078;
  param_1[4] = fn_82A38FB0;
  param_1[5] = fn_82A38F00;
  *param_1 = lbl_8315D3D0;
  param_1[6] = fn_82A38DE0;
  param_1[8] = fn_82A38C78;
  param_1[7] = fn_82A38C08;
  param_1[9] = fn_82A38AD8;
  param_1[3] = fn_82A38AA0;
  param_1[10] = fn_82A38700;
  param_1[0xb] = fn_82A38678;
  lbl_8315D3D0 = (undefined *)param_1;
  param_1[0xc] = 1;
  return;
}

