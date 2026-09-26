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
extern unsigned int *auStack_40;
extern int fn_822C4DB0();
extern int fn_822C72E0();
extern int fn_8230C220();
extern int fn_823691B0();
extern int fn_825113E0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8230C5F8(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_40 [64];
  
  fn_823691B0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0xc),auStack_40,
                    &uStack_50);
  fn_822C4DB0(*(undefined4 *)(param_2 + 0xc));
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0xd4) + 0x18) + 0xc) == 0) {
    piVar2 = *(int **)(*(int *)(param_2 + 0x10) + 0x84);
    if (piVar2 == (int *)0x0) {
      bVar6 = true;
    }
    else {
      iVar4 = (**(code **)(*piVar2 + 8))();
      cVar5 = (**(code **)(*(int *)(iVar4 + 0x9c) + 0x3c))();
      bVar6 = cVar5 != '\0';
    }
    if (bVar6) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x38) - param_1);
      *(float *)(param_2 + 0x38) = fVar1;
      if (((*(int *)(param_2 + 0x3c) != 0) && (fVar1 <= lbl_821CC160)) &&
         (iVar4 = fn_822C72E0(*(undefined4 *)
                                     (*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20),
                                    0xffffffff821af36c), iVar4 != 0)) {
        iVar4 = *(int *)(param_2 + 0xc);
        iVar3 = *(int *)(param_2 + 0x10);
        *(undefined4 *)(param_2 + 0x3c) = 0;
        fn_825113E0((ulonglong)*(uint *)(iVar4 + 0x118) + 0x14,0x14,param_2 + 0x18);
        *(undefined4 *)(iVar3 + 0x14c0) = *(undefined4 *)(iVar4 + 0x2c);
        *(undefined4 *)(iVar3 + 0x14c4) = *(undefined4 *)(iVar4 + 0x28);
      }
    }
  }
  uStack_50 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x28);
  uStack_4c = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x2c);
  fn_8230C220((ulonglong)*(uint *)(param_2 + 0x10) + 0xa18,&uStack_50);
  return;
}

