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
extern unsigned int *auStack_a0;
extern int fn_8255FCD0();
extern int fn_825A2520();
extern int fn_82F66368();
extern int fn_82F66570();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;


ulonglong fn_825328D0(int param_1,int param_2)

{
  double dVar1;
  int iVar3;
  ulonglong uVar2;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a0 [160];
  
  puVar8 = (undefined4 *)(param_1 + 0x180);
  if ((*(int *)(param_1 + 0x180) != 0) && (param_2 != 0)) {
    iVar3 = fn_82F66570(param_2,0x3f);
    if (iVar3 == 0) {
      uVar2 = fn_8255FCD0(*puVar8,param_2,param_1 + 0x188);
      return uVar2;
    }
    fn_82F66368(&stack0x00000000 + -0xa0,0x40,param_2,iVar3 - param_2);
    puVar9 = &stack0x00000000 + (iVar3 - param_2) + -0xa0;
    iVar7 = (param_2 - iVar3) + 0x40;
    *puVar9 = 0;
    *puVar9 = 0;
    fn_825A2520(puVar9,iVar7,1);
    iVar6 = param_1 + 0x188;
    iVar3 = fn_8255FCD0(*puVar8,&stack0x00000000 + -0xa0,iVar6);
    lVar4 = 0;
    if (iVar3 != 0) {
      do {
        *puVar9 = 0;
        lVar5 = lVar4 + 1;
        fn_825A2520(puVar9,iVar7,lVar4 + 2);
        iVar3 = fn_8255FCD0(*puVar8,&stack0x00000000 + -0xa0,iVar6);
        lVar4 = lVar5;
      } while (iVar3 != 0);
      iVar3 = (int)lVar5;
      if (iVar3 != 0) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        dVar11 = (double)(longlong)iVar3;
        dVar10 = (double)lbl_821CA460;
        dVar1 = (double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar10) *
                dVar11;
        while( true ) {
          *puVar9 = 0;
          fn_825A2520(puVar9,iVar7,(ulonglong)(uint)(int)dVar1 + 1);
          uVar2 = fn_8255FCD0(*puVar8,&stack0x00000000 + -0xa0,iVar6);
          if (((ulonglong)*(uint *)(param_1 + 0x1a0) != (uVar2 & 0xffffffff)) || (iVar3 == 1))
          break;
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          dVar1 = (double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar10) *
                  dVar11;
        }
        *(int *)(param_1 + 0x1a0) = (int)uVar2;
        return uVar2;
      }
    }
  }
  return 0;
}

