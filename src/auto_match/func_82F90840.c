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
extern int fn_82F90960();
extern int fn_82F91510();
extern int fn_82F915E8();
extern int fn_82F93840();
extern int fn_82F96B00();
extern unsigned int lbl_8216B72C;
extern unsigned int lbl_8216B770;
extern unsigned int lbl_8216BC9C;


undefined4 * fn_82F90840(undefined4 *param_1)

{
  undefined4 *puStack00000014;
  
  puStack00000014 = param_1;
  fn_82F90960(param_1);
  fn_82F96B00(puStack00000014 + 2);
  *puStack00000014 = &lbl_8216BC9C;
  puStack00000014[1] = &lbl_8216B72C;
  puStack00000014[2] = &lbl_8216B770;
  fn_82F93840(puStack00000014 + 3);
  fn_82F91510(puStack00000014 + 0xc);
  puStack00000014[0x16] = 0;
  puStack00000014[0x17] = 0;
  puStack00000014[0x18] = 0;
  *(undefined1 *)(puStack00000014 + 0x19) = 0;
  fn_82F915E8(puStack00000014 + 0x1a);
  return puStack00000014;
}

