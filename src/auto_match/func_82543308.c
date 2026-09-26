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
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern int fn_826310E0();
extern int fn_82639F78();
extern unsigned int iStack_74;
extern unsigned int uStack_b8;


void fn_82543308(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [60];
  int iStack_74;
  undefined1 auStack_70 [112];
  
  iVar2 = param_3[1];
  if (iVar2 == 0) {
    param_1[5] = param_3;
  }
  else {
    puVar5 = &uStack_b8;
    lVar7 = 8;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    thunk_FUN_82838b18(auStack_70,(ulonglong)*(uint *)param_3[2] + (ulonglong)*(uint *)(param_2 + 4)
                       ,auStack_b0,iVar2,*param_3);
    uVar3 = 0;
    if (param_3[1] != 0) {
      piVar6 = &iStack_74;
      uVar4 = 1;
      do {
        piVar6 = piVar6 + 1;
        fn_82639F78(*param_1,uVar4,param_3[(*piVar6 + 2) * 2],0,param_3[*piVar6 * 2 + 5],
                          0x8000000000000000 >>
                          ((((0x5f - uVar4) * 0x5556 & 0xffffffff) >> 0x10) + 0x20 & 0x7f));
        uVar3 = param_3[1];
        uVar1 = uVar4 & 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar1 < uVar3);
    }
    uVar4 = (ulonglong)(uint)param_3[3];
    if ((uVar4 != 0xffff) ||
       (uVar4 = (ulonglong)(uint)param_1[0x2014], param_1[0x2014] != 0xffffffff)) {
      lVar7 = (ulonglong)(uVar3 - 1 >> 2) + 1;
      fn_826310E0(*param_1,uVar4,auStack_b0,lVar7,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((uVar4 + lVar7) - 1 & 0xffffffff) >> 2) - (uVar4 >> 2) & 0x7f)) >>
                   (uVar4 >> 2 & 0x7f));
    }
  }
  return;
}

