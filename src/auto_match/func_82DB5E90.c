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
extern unsigned int *auStack_470;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DB4A58();
extern int fn_830AFDF8();


undefined1 *
fn_82DB5E90(undefined1 *param_1,int *param_2,int *param_3,undefined8 param_4,int *param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_470 [1136];
  
  uVar4 = 1;
  iVar5 = 0;
  if (0 < param_3[1]) {
    iVar6 = 0;
    uVar4 = 1;
    do {
      piVar7 = (int *)(iVar6 + *param_3);
      if (*(char *)(*(int *)(iVar6 + *param_3) + 0x1c) == '\x05') {
        uVar1 = fn_830AFDF8(param_2[1],piVar7[1],param_2[3],0x100,auStack_470);
        iVar2 = fn_82DB4A58((double)*(float *)(*param_2 + 8),uVar1,piVar7,auStack_470,uVar1,
                              param_4);
        if (-1 < iVar2) {
          if (param_5 == (int *)0x0) {
            *param_1 = 0;
            return param_1;
          }
          uVar4 = 0;
          iVar3 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_5,0xc);
          }
          iVar3 = param_5[1];
          param_5[1] = iVar3 + 1;
          iVar3 = iVar3 * 0xc;
          iVar8 = iVar3 + *param_5;
          *(int *)(iVar3 + *param_5) = *piVar7;
          iVar3 = (**(code **)(**(int **)(*piVar7 + 0xc) + 0x20))();
          if (iVar3 == 0xb) {
            iVar3 = *(int *)(*piVar7 + 0xc);
            *(int *)(iVar8 + 4) = iVar2 * 0x20 + *(int *)(iVar3 + 0x28) + 0x30;
            iVar3 = *(int *)(iVar3 + 0x28);
            *(uint *)(iVar8 + 8) =
                 (uint)*(byte *)(iVar3 + 10) * (int)(short)iVar2 +
                 (uint)*(ushort *)(iVar3 + 6) * 0x20 + iVar3 + 0x30;
          }
          else {
            *(undefined4 *)(iVar8 + 4) = 0;
            *(undefined4 *)(iVar8 + 8) = 0;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < param_3[1]);
  }
  *param_1 = uVar4;
  return param_1;
}

