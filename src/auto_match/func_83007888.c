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
extern int fn_83006E68();
extern int fn_8302AF48();
extern int fn_8302AFF8();
extern int fn_8302B0A8();
extern int fn_8302B158();
extern unsigned int iStack_20;


undefined8 fn_83007888(int param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  int iStack_20;
  
  iVar2 = fn_83006E68();
  if ((iVar2 != 0) && ((*(byte *)(param_1 + 0x3d) & 4) != 0)) {
    if ((param_2 - 1U & 0xffffffff) < 8) {
      bVar1 = (int)(param_2 - 1U) != 0;
      if (param_2 == 2 && bVar1) {
        iStack_20 = fn_8302AFF8();
      }
      else if (param_2 != 3 || !bVar1) {
        if (param_2 == 4 && bVar1) {
          iStack_20 = fn_8302B0A8();
        }
        else if (((param_2 != 5 || !bVar1) && (param_2 != 6 || !bVar1)) && (param_2 != 7 || !bVar1))
        {
          if (bVar1) {
            iStack_20 = fn_8302B158();
          }
          else {
            iStack_20 = fn_8302AF48();
          }
        }
      }
    }
    if (iStack_20 == 1) {
      return 0;
    }
  }
  return 1;
}

