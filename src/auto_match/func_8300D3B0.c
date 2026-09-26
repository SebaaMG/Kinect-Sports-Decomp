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
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FEFD50();
extern int fn_8300D348();
extern int fn_83037510();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_831BC770;


undefined8 fn_8300D3B0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_2 + 0x3a4) == '\0') {
    iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x14);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0xfc) + 8);
    }
    iVar2 = fn_82FEFD50(uVar5);
    if (((iVar2 != 0) && (*(char *)(param_1 + 0x4d) != '\0')) &&
       (iVar3 = fn_8300D348(param_1,uVar5), iVar3 != 0)) {
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      uVar1 = *(ushort *)(param_2 + 0x1c);
      puVar4 = (undefined4 *)fn_82FA5060(lbl_831BC770,0x10);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        if ((lbl_82186E6C < *(float *)(iVar2 + 0xc)) &&
           (iVar3 = fn_83037510(puVar4,uVar1,*(undefined2 *)(iVar2 + 0x2c)), iVar3 == 1)) {
          fn_82F68CC0(*puVar4,uVar5,
                       (longlong)(int)(uint)(*(ushort *)(iVar2 + 0x2e) >> 0xd) *
                       (longlong)(int)(uint)uVar1 * 4);
          *(undefined2 *)((int)puVar4 + 0xe) = *(undefined2 *)(param_2 + 0x1e);
        }
        *(undefined4 **)(param_2 + 0x3a0) = puVar4;
        return 1;
      }
    }
  }
  return 0;
}

