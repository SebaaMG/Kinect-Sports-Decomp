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
extern int fn_82FA5060();
extern int fn_8300CE00();
extern int fn_8300CE88();
extern int fn_8300CF30();
extern unsigned int lbl_831BC768;


undefined8 fn_82FB7AC0(int *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = param_2;
  *(byte *)((int)param_1 + 6) =
       (byte)(LZCOUNT((uint)*(ushort *)(param_2 + 0xc)) << 1) & 0x40 | 0x80 |
       *(byte *)((int)param_1 + 6) & 0x3f;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 0xc);
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (uVar1 < 4) {
    if (uVar1 == 0) {
      iVar3 = fn_82FA5060(lbl_831BC768,0x10);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_8300CE88();
      }
      param_1[2] = iVar3;
      if (iVar3 != 0) {
        return 1;
      }
    }
    else {
      if ((uVar1 == 1) || (uVar1 != 2)) {
        *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x40;
        return 1;
      }
      uVar2 = fn_82FA5060(lbl_831BC768,0x2c);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_8300CF30(uVar2,*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 2 & 0xffff
                            );
      }
      param_1[2] = (int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        iVar3 = fn_8300CE00(uVar2,*(undefined2 *)(param_2 + 0x28));
        if (iVar3 == 1) {
          if (*(char *)(param_2 + 0x24) == '\0') {
            return 1;
          }
          iVar3 = 0;
          for (piVar4 = *(int **)(param_2 + 0x10); piVar4 != *(int **)(param_2 + 0x14);
              piVar4 = piVar4 + 1) {
            iVar3 = (uint)*(ushort *)(*piVar4 + 0xe) + iVar3;
          }
          *(int *)(param_1[2] + 0x10) = iVar3;
          *(int *)(param_1[2] + 0xc) = iVar3;
          return 1;
        }
        (**(code **)(*(int *)param_1[2] + 4))();
        param_1[2] = 0;
      }
    }
  }
  return 2;
}

