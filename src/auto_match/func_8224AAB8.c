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
extern int fn_82250A18();
extern int fn_825130F8();
extern int fn_8265C9E0();
extern unsigned int lbl_8219793C;
extern unsigned int lbl_832975B0;


undefined4 * fn_8224AAB8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x54);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_825130F8(puVar1,param_2);
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    *(undefined1 *)(puVar1 + 0x11) = 0;
    puVar1[0x12] = 0;
    *(undefined1 *)(puVar1 + 0x14) = 0;
    *(undefined1 *)((int)puVar1 + 0x51) = 0;
    puVar1[0x13] = 0;
    *puVar1 = &lbl_8219793C;
    iVar2 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    *(undefined1 *)(iVar2 + 4) = 1;
  }
  *param_1 = puVar1;
  return param_1;
}

