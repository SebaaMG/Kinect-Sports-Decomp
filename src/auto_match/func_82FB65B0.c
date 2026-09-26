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
extern int fn_82FAF788();
extern int fn_82FAF810();
extern int fn_82FFF908();
extern int fn_82FFF990();


undefined8 fn_82FB65B0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = fn_82FAF788();
  if ((int)uVar3 == 1) {
    iVar6 = *(int *)(param_1 + 0xa0);
    uVar4 = 0;
    if ((*(int *)(param_1 + 0xa4) - iVar6) / 0x34 != 0) {
      iVar5 = 0;
      do {
        if ((*(undefined4 **)(iVar6 + 0x30) != (undefined4 *)0x0) &&
           (uVar3 = fn_82FFF908(**(undefined4 **)(iVar6 + 0x30)), (int)uVar3 != 1)) {
          if ((uVar4 & 0xffffffff) != 0) {
            iVar6 = 0;
            do {
              puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xa0) + iVar6 + 0x30);
              if (puVar2 != (undefined4 *)0x0) {
                fn_82FFF990(*puVar2);
              }
              uVar4 = uVar4 - 1;
              iVar6 = iVar6 + 0x34;
            } while (uVar4 != 0);
          }
          fn_82FAF810(param_1);
          return uVar3;
        }
        iVar1 = *(int *)(param_1 + 0xa0);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x34;
        iVar6 = iVar5 + iVar1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)((*(int *)(param_1 + 0xa4) - iVar1) / 0x34));
    }
  }
  return uVar3;
}

