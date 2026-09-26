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
extern int fn_82AE7110();
extern int fn_82B50AA8();
extern int fn_82B50B00();


undefined8 fn_82B524E8(int param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  char cVar4;
  int iVar3;
  
  puVar2 = (undefined4 *)fn_82AE7110(param_1,param_2,0,0);
  do {
    if (puVar2[1] == 0) {
      cVar4 = fn_82B50AA8(puVar2);
      bVar1 = true;
      if (cVar4 != '\0') goto LAB_82b52530;
    }
    else {
LAB_82b52530:
      bVar1 = false;
    }
    if (bVar1) {
      *puVar2 = *(undefined4 *)(param_1 + 0x3ec);
      *(undefined4 **)(param_1 + 0x3ec) = puVar2;
      return 0;
    }
    iVar3 = fn_82B50B00(puVar2);
    if (iVar3 < 0x27) {
      if (iVar3 < 0x21) {
        if (iVar3 < 0x16) {
          return 1;
        }
        if ((0x19 < iVar3) && (iVar3 != 0x1b)) {
          if (iVar3 < 0x1d) {
            return 1;
          }
          if (0x1e < iVar3) {
            return 1;
          }
        }
      }
    }
    else if ((iVar3 < 0x2a) ||
            ((0x2b < iVar3 && ((iVar3 < 0x2d || ((0x2f < iVar3 && (iVar3 != 0x37)))))))) {
      return 1;
    }
    puVar2[1] = 0;
  } while( true );
}

