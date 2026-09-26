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
extern int fn_82FAFA90();
extern int fn_82FB0028();
extern int fn_82FB0530();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC768;


undefined8 fn_82FAFB18(int param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  if (uVar3 == 0) {
    fn_82FAFA90();
  }
  else {
    iVar2 = *(int *)(param_1 + 0x9c);
    uVar5 = 0;
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x10);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = &lbl_8217D040;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      *(undefined4 **)(param_1 + 0x9c) = puVar1;
      if ((puVar1 == (undefined4 *)0x0) ||
         (iVar2 = fn_82FB0028(puVar1 + 1,param_3), iVar2 != 1)) {
        return 2;
      }
    }
    else {
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + 4);
    }
    if (uVar3 != 0) {
      do {
        iVar2 = fn_82FB0530((ulonglong)*(uint *)(param_1 + 0x9c) + 4);
        if (iVar2 != 0) {
          puVar1 = (undefined4 *)(param_2 + -4);
          puVar4 = (undefined4 *)(iVar2 + -4);
          lVar6 = 5;
          do {
            puVar1 = puVar1 + 1;
            puVar4 = puVar4 + 1;
            *puVar4 = *puVar1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        param_2 = param_2 + 0x14;
        if (iVar2 == 0) {
          return 2;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
  }
  return 1;
}

