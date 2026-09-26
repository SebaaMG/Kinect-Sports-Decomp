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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DAF6D0();
extern unsigned int iStack_9c;
extern unsigned int uStack_98;


void fn_82D914D8(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piStack_a0;
  int iStack_9c;
  uint uStack_98;
  int aiStack_94 [37];
  
  iVar4 = *(int *)(param_2 + 0xcc);
  piStack_a0 = aiStack_94;
  iStack_9c = 0;
  uStack_98 = 0x80000010;
  iVar6 = 0;
  if (*(short *)(param_2 + 0x20c) != 0) {
    iVar7 = 0;
    do {
      piVar1 = *(int **)(iVar7 + *(int *)(param_2 + 0x208));
      (**(code **)(*piVar1 + 0x10))(piVar1,&piStack_a0);
      bVar2 = true;
      iVar3 = 0;
      piVar5 = piStack_a0;
      if (0 < iStack_9c) {
        do {
          if ((*(char *)(*piVar5 + 0xe8) != '\x05') && (*piVar5 != param_2)) {
            bVar2 = false;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar3 < iStack_9c);
      }
      if (bVar2) {
        iVar3 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_3,4);
        }
        *(int **)(param_3[1] * 4 + *param_3) = piVar1;
        param_3[1] = param_3[1] + 1;
        fn_82CE4040(piVar1);
        fn_82DAF6D0(iVar4,piVar1);
        *(byte *)(iVar4 + 0x25) = *(byte *)(iVar4 + 0x25) & 0xf3 | 4;
        if (*(short *)(iVar4 + 0x22) == -1) {
          *(short *)(iVar4 + 0x22) = (short)*(undefined4 *)(param_1 + 0x44);
          iVar3 = fn_82CE5410();
          if (*(uint *)(param_1 + 0x44) == (*(uint *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),(int *)(param_1 + 0x40),4);
          }
          *(int *)(*(int *)(param_1 + 0x44) * 4 + *(int *)(param_1 + 0x40)) = iVar4;
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < (int)(uint)*(ushort *)(param_2 + 0x20c));
  }
  iVar4 = fn_82CE5410();
  iStack_9c = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),piStack_a0,uStack_98 & 0x3fffffff,4);
  }
  return;
}

