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
extern char cRam8322fd2e;
extern int fn_82BF9498();
extern int fn_82BF9620();
extern int fn_82F68CC0();
extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322DCF8;
extern unsigned int lbl_8322ECF8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FD18;
extern unsigned int lbl_8322FD22;
extern unsigned int lbl_8322FD24;
extern unsigned int lbl_8322FD2C;


undefined8 fn_82BFA208(ulonglong *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  int *apiStack_50 [20];
  
  if (lbl_8322FD18 == 0) {
    return 0x8002;
  }
  RtlEnterCriticalSection(0xffffffff83231d48);
  uVar4 = (ulonglong)lbl_8322FD2C;
  bVar6 = false;
  if (param_3 == 0) {
    cRam8322fd2e = '\x01';
    uVar1 = lbl_8322FD22;
LAB_82bfa2e4:
    uVar4 = (ulonglong)uVar1;
  }
  else {
    if (param_3 == 1) {
      cRam8322fd2e = '\0';
      uVar1 = lbl_8322FD24;
      goto LAB_82bfa2e4;
    }
    if (2 < param_3) {
      if (param_3 == 3) {
        bVar6 = true;
        goto LAB_82bfa298;
      }
      if (uVar4 != 0xffff) goto LAB_82bfa2e8;
LAB_82bfa280:
      uVar8 = 0x800a;
      goto LAB_82bfa464;
    }
LAB_82bfa298:
    if (uVar4 == 0xffff) goto LAB_82bfa280;
    if (cRam8322fd2e == '\0') {
      uVar4 = (ulonglong)(ushort)(&lbl_8322B4F8)[lbl_8322FD2C];
    }
    else {
      uVar4 = (ulonglong)(ushort)(&lbl_8322F4F8)[lbl_8322FD2C];
    }
  }
LAB_82bfa2e8:
  lbl_8322FD2C = (ushort)uVar4;
  if (bVar6) {
    fn_82BF9498();
  }
  if (uVar4 == 0xffff) {
    uVar8 = 0x8009;
  }
  else {
    sVar2 = *(short *)((int)&lbl_8322ECF8 + (int)(uVar4 << 1));
    iVar5 = fn_82BF9620(sVar2,0,0,apiStack_50);
    if (iVar5 == 0) {
      uVar8 = 0x8008;
    }
    else {
      uVar3 = (ulonglong)*(ushort *)((int)apiStack_50[0] + 0x12) +
              (ulonglong)*(ushort *)(apiStack_50[0] + 5) +
              (ulonglong)*(ushort *)(apiStack_50[0] + 4) + 0x22b & 0xfffffe00;
      if ((((*apiStack_50[0] == 0x4355524c) &&
           (apiStack_50[0][2] == *(int *)((int)&lbl_8322DCF8 + (int)(uVar4 << 2)))) &&
          (*(short *)(apiStack_50[0] + 3) == sVar2)) &&
         (((uVar3 == *(ushort *)((int)apiStack_50[0] + 0xe) && (uVar3 < 0x2001)) &&
          (iVar5 = RtlComputeCrc32(0,apiStack_50[0] + 2,uVar3 - 8), iVar5 == apiStack_50[0][1])))) {
        *param_1 = (ulonglong)(uint)apiStack_50[0][6];
        *(int *)(param_1 + 1) = apiStack_50[0][7];
        *(int *)((int)param_1 + 0xc) = apiStack_50[0][8];
        *(int *)(param_1 + 2) = apiStack_50[0][9];
        *(int *)((int)param_1 + 0x14) = apiStack_50[0][10];
        *(uint *)(param_1 + 4) = (uint)*(ushort *)(apiStack_50[0] + 5);
        *(uint *)(param_1 + 3) = (uint)*(ushort *)(apiStack_50[0] + 4);
        *(uint *)((int)param_1 + 0x1c) = (uint)*(ushort *)((int)apiStack_50[0] + 0x12);
        *(undefined2 *)((int)param_1 + 0x24) = *(undefined2 *)((int)apiStack_50[0] + 0x16);
        uVar7 = (uint)*(ushort *)(apiStack_50[0] + 4);
        if (*(ushort *)((int)apiStack_50[0] + 0x12) + uVar7 + 0x28 <= param_2) {
          fn_82F68CC0(param_1 + 5,apiStack_50[0] + 0xb,uVar7);
          fn_82F68CC0(uVar7 + (int)(param_1 + 5),uVar7 + (int)(apiStack_50[0] + 0xb),
                       *(undefined2 *)((int)apiStack_50[0] + 0x12));
        }
        uVar8 = 0;
      }
      else {
        uVar8 = 0x800b;
      }
    }
  }
LAB_82bfa464:
  RtlLeaveCriticalSection(0xffffffff83231d48);
  return uVar8;
}

