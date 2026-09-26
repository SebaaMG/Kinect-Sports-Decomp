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
extern int fn_826D6630();
extern int fn_8276A0B8();
extern int fn_8276A0F0();
extern int fn_827BA058();


undefined8
fn_82773F48(int param_1,int *param_2,int *param_3,undefined8 param_4,ulonglong param_5,
             int *param_6,char param_7)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = 0;
  param_2[5] = 0;
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined2 *)((int)param_2 + 0x1a) = 0;
  if (((param_7 == '\0') && ((param_5 & 0xffffffff) != 0)) ||
     (iVar3 = *(int *)(*param_3 + 0x10), iVar3 == 0)) {
    iVar3 = fn_827BA058(param_1 + 0x40,*(undefined4 *)(*param_6 + 0xc),param_3,param_4,param_5
                              ,*(undefined2 *)(param_2 + 4),param_6[5]);
    param_2[3] = iVar3;
    if (iVar3 == 0) {
      if ((((param_5 & 0xffffffff) != 0) && (param_6[5] != 0)) &&
         (*(char *)(param_1 + 0x19) != '\0')) {
        fn_826D6630((ulonglong)(uint)param_6[5] + 0xc,0xffffffff82015348);
      }
      *(undefined1 *)(param_1 + 0x19) = 0;
      return 0;
    }
    param_2[5] = *(int *)(((*(ushort *)(*(int *)(iVar3 + 0xc) + 0x20) & 0xffff3fff) + 6) * 0x14 +
                         param_1);
    *(ushort *)(*(int *)(iVar3 + 0xc) + 0x20) = *(ushort *)(*(int *)(iVar3 + 0xc) + 0x20) | 0x8000;
  }
  else {
    *(undefined2 *)(param_2 + 4) = 0;
    *(undefined2 *)((int)param_2 + 0x12) = 0x100;
    uVar1 = fn_8276A0F0(iVar3,*(undefined2 *)(param_3 + 1));
    piVar2 = (int *)fn_8276A0B8(uVar1,*(undefined4 *)(*param_3 + 0x14));
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(*param_6 + 0xc));
      param_2[5] = iVar3;
      uVar4 = (**(code **)(*piVar2 + 4))(piVar2);
      *(undefined2 *)(param_2 + 6) = uVar4;
      uVar4 = (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined2 *)((int)param_2 + 0x1a) = uVar4;
    }
  }
  return 1;
}

