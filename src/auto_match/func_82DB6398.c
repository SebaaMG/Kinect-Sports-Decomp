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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_83080BC0();
extern int fn_83089E78();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_58;


void fn_82DB6398(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,int *param_5,
                  int *param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  
  iStack_60 = 0;
  iStack_5c = 0;
  uStack_58 = 0x80000000;
  fn_83089E78(param_2 + 0x10,&iStack_60);
  iVar4 = 0;
  if (0 < iStack_5c) {
    iVar5 = 0;
    do {
      piVar6 = (int *)(iVar5 + iStack_60);
      if (param_3 <= (int)(uint)*(byte *)(*piVar6 + 0xc)) {
        iVar3 = (int)*(char *)(piVar6[1] + 0x10) + piVar6[1];
        if (*(char *)(iVar3 + 0xe8) != '\x05') {
          uVar1 = *(ushort *)(iVar3 + 0xa8);
          iVar2 = *param_5;
          if (7 < *(byte *)((uint)uVar1 + iVar2)) goto LAB_82db64b0;
          if (*(char *)(iVar3 + 0xe8) != '\x05') {
            if (*(char *)((uint)uVar1 + iVar2) == '\0') {
              *(undefined1 *)((uint)uVar1 + iVar2) = 1;
              fn_83080BC0(param_1,iVar3 + 0x130);
            }
          }
        }
        iVar3 = fn_82CE5410();
        if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_6,4);
        }
        *(int *)(param_6[1] * 4 + *param_6) = *piVar6;
        param_6[1] = param_6[1] + 1;
      }
LAB_82db64b0:
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar4 < iStack_5c);
  }
  iVar4 = fn_82CE5410();
  iStack_5c = 0;
  if ((uStack_58 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_60,uStack_58 & 0x3fffffff,8);
  }
  return;
}

