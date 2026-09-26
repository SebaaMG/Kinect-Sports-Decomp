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
extern int fn_82681898();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_827579F0();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;


void fn_82737FC8(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  char cVar5;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  cVar5 = fn_82695468(param_1,0x29);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edd0,0,0);
  }
  else {
    uVar6 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    if (((uVar6 & 0xffffffff) != 0) && (1 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      dVar7 = (double)fn_826972E0(uVar3,uVar1);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      dVar9 = (double)(float)dVar7;
      uVar3 = fn_826957D0(param_1,1);
      dVar7 = (double)fn_826972E0(uVar3,uVar1);
      dVar7 = (double)(float)dVar7;
      fVar2 = lbl_821AAD20;
      if (2 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,2);
        dVar8 = (double)fn_826972E0(uVar3,uVar1);
        fVar2 = (float)dVar8;
      }
      dVar8 = (double)lbl_8200571C;
      iVar4 = fn_827579F0((double)(float)(dVar9 * dVar8),(double)(float)(dVar7 * dVar8),
                              (double)(float)((double)fVar2 * dVar8),uVar6 + 0x30);
      fn_82681898((double)(longlong)iVar4,*(undefined4 *)(param_1 + 4));
    }
  }
  return;
}

