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
extern int fn_82ACD310();
extern int fn_82ACD3D8();


undefined8 fn_82ACD528(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  uVar1 = *(uint *)(param_2 + 0x14) & 0x1fff;
  do {
    if ((iVar4 == 0) || (uVar3 = *(uint *)(*(int *)(param_1 + 0x3c) + 0x14) & 0x1fff, uVar1 < uVar3)
       ) {
      return 1;
    }
    if (uVar1 == uVar3) {
      uVar3 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
      if ((uVar3 < 0x20) || (bVar2 = true, 0x52 < uVar3)) {
        bVar2 = false;
      }
      if (bVar2) {
        return 1;
      }
    }
    iVar4 = fn_82ACD3D8(param_1);
    if (iVar4 != 0) {
      if (iVar4 == 2) {
        iVar4 = fn_82ACD310(param_1,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x1c));
        if (iVar4 != *(int *)(param_1 + 0x3c)) {
          return 0;
        }
        iVar4 = 0;
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
      if (iVar4 != 0) {
        return 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0x3c);
  } while( true );
}

