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
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_8267C498();
extern int fn_82681B80();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_826972E0();
extern int fn_8269CEE0();
extern int fn_82F68CC0();
extern unsigned int lbl_82021544;


void fn_827145C8(int param_1)

{
  undefined4 uVar1;
  char cVar4;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  int *apiStack_80 [4];
  undefined1 auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  cVar4 = fn_82695468(param_1,0x15);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef1c,0,0);
  }
  else {
    uVar5 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    if ((uVar5 & 0xffffffff) != 0) {
      fn_8269CEE0(apiStack_80,uVar5 + 0x30);
      if (apiStack_80[0] != (int *)0x0) {
        apiStack_80[0][1] = apiStack_80[0][1] + 1;
        fn_8267C498(apiStack_80[0]);
      }
      if (*(int *)(param_1 + 0x1c) < 1) {
        if (apiStack_80[0] == (int *)0x0) {
          return;
        }
      }
      else {
        if (apiStack_80[0] == (int *)0x0) {
          return;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar2 = fn_826957D0(param_1,0);
        lVar3 = fn_82696AD0(uVar2,uVar1);
        if (lVar3 != 0) {
          fn_82F68CC0(&fStack_60,apiStack_80[0] + 9,0x20);
          auStack_70[0] = 0;
          lVar6 = (ulonglong)*(uint *)(param_1 + 0x18) + 0x78;
          cVar4 = fn_82681B80(lVar3,lVar6,0xffffffff8200f4c0,auStack_70);
          dVar8 = (double)lbl_82021544;
          if (cVar4 != '\0') {
            dVar7 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
            fStack_50 = (float)((double)(float)dVar7 * dVar8);
          }
          cVar4 = fn_82681B80(lVar3,lVar6,0xffffffff8200f4bc,auStack_70);
          if (cVar4 != '\0') {
            dVar7 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
            fStack_58 = (float)((double)(float)dVar7 * dVar8);
          }
          cVar4 = fn_82681B80(lVar3,lVar6,0xffffffff8200f4b8,auStack_70);
          if (cVar4 != '\0') {
            dVar7 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
            fStack_60 = (float)((double)(float)dVar7 * dVar8);
          }
          cVar4 = fn_82681B80(lVar3,lVar6,0xffffffff8200f4b4,auStack_70);
          if (cVar4 != '\0') {
            dVar7 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
            fStack_48 = (float)((double)(float)dVar7 * dVar8);
          }
          cVar4 = fn_82681B80(lVar3,lVar6,0xffffffff8200f4b0,auStack_70);
          if (cVar4 != '\0') {
            dVar8 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
            fStack_4c = (float)dVar8;
          }
          cVar4 = fn_82681B80(lVar3,lVar6,0xffffffff8200f4ac,auStack_70);
          if (cVar4 != '\0') {
            dVar8 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
            fStack_54 = (float)dVar8;
          }
          cVar4 = fn_82681B80(lVar3,lVar6,0xffffffff821c42ec,auStack_70);
          if (cVar4 != '\0') {
            dVar8 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
            fStack_5c = (float)dVar8;
          }
          cVar4 = fn_82681B80(lVar3,lVar6,0xffffffff8200d784,auStack_70);
          if (cVar4 != '\0') {
            dVar8 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
            fStack_44 = (float)dVar8;
          }
          fn_82F68CC0(apiStack_80[0] + 9,&fStack_60,0x20);
          (**(code **)(*apiStack_80[0] + 4))(apiStack_80[0]);
          (**(code **)(*apiStack_80[0] + 0x14))(apiStack_80[0],0);
          fn_82696330(auStack_70);
        }
      }
      fn_8267C498(apiStack_80[0]);
    }
  }
  return;
}

