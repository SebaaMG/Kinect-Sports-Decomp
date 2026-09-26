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
extern int fn_82FA5190();
extern int fn_82FA9208();
extern int fn_82FABA50();


undefined8 fn_82FABC50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1[4] != 0) {
    while (*param_1 != 0) {
      fn_82FABA50(param_1,*param_1,0);
    }
    puVar1 = (undefined4 *)param_1[2];
    while (puVar4 = puVar1, puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar4;
      if ((puVar4 < (undefined4 *)param_1[6]) ||
         (bVar3 = false, (undefined4 *)param_1[6] + param_1[3] * 7 <= puVar4)) {
        bVar3 = true;
      }
      if (bVar3) {
        if (puVar4[5] != 0) {
          fn_82FA9208();
          puVar4[5] = 0;
        }
        fn_82FA5190(param_1[7],puVar4);
      }
    }
    if (param_1[6] != 0) {
      uVar5 = 0;
      if (param_1[3] != 0) {
        iVar6 = 0;
        do {
          iVar2 = param_1[6];
          if (*(int *)(iVar2 + iVar6 + 0x14) != 0) {
            fn_82FA9208();
            *(undefined4 *)(iVar2 + iVar6 + 0x14) = 0;
          }
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x1c;
        } while (uVar5 < (uint)param_1[3]);
      }
      fn_82FA5190(param_1[7],param_1[6]);
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return 1;
}

