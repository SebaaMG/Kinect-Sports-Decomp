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
extern unsigned int *auStack_e0;
extern int fn_8279B4E0();
extern int fn_8279B6A8();
extern int fn_8279B858();
extern int fn_8279B930();
extern int fn_8279BB50();
extern int fn_8279CF40();
extern int fn_827A96C0();
extern unsigned int iStack_100;
extern unsigned int iStack_f0;
extern unsigned int iStack_f4;
extern unsigned int iStack_f8;
extern unsigned int iStack_fc;
extern unsigned int lbl_821AAD20;


undefined8 fn_8279D630(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar7;
  undefined8 uVar5;
  int iVar6;
  uint uVar8;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined1 auStack_e0 [224];
  
  if (((((param_1[0xba] == 1) && ((*(byte *)(*param_1 + 0x13d) & 8) != 0)) &&
       (*(char *)(param_1 + 0x14a) == '\0')) &&
      ((float)param_1[0xb6] - (float)(longlong)param_1[0x24] <
       (float)(longlong)(param_1[0x148] + param_1[0x147] + param_1[0x23] + param_1[0x22]))) ||
     ((param_1[0xba] == 2 && (param_1[0x2e] == param_1[0xbc])))) {
    cVar7 = fn_8279CF40(param_1);
    if (cVar7 != '\0') {
      return 1;
    }
    param_1[0x148] = 0;
    if ((param_1[0xa4] == 0) || (bVar4 = false, *(uint *)(param_1[0xa4] + 4) <= (uint)param_1[0xa5])
       ) {
      bVar4 = true;
    }
    if (!bVar4) {
      iStack_100 = param_1[0xac];
      iStack_fc = param_1[0xad];
      iStack_f8 = param_1[0xae];
      iStack_f4 = param_1[0xaf];
      iStack_f0 = param_1[0xb0];
      fn_827A96C0(param_1 + 0x25,&iStack_100);
      fn_8279B930(param_1 + 4,param_1 + 0x8b);
      *(undefined1 *)(param_1 + 0x14a) = 0;
      param_1[0xb9] = 0;
    }
    uVar5 = fn_8279B4E0(auStack_e0);
    fn_8279B930(param_1 + 0x8b,uVar5);
    fn_8279B858(auStack_e0);
    iVar1 = *(int *)(param_1[1] + 0x1c);
    iVar6 = fn_8279B6A8(param_1 + 4);
    iVar2 = param_1[4];
    uVar8 = *(int *)(iVar6 + 4) + iVar1;
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 6) = *(ushort *)(iVar2 + 6) | 8;
    }
    fn_8279BB50(param_1);
    param_1[4] = 0;
    *(undefined1 *)((int)param_1 + 0xb5) = 0;
    *(undefined1 *)(param_1 + 0x2d) = 0;
    param_1[0x12] = 0;
    iVar1 = lbl_821AAD20;
    param_1[0x13] = 0;
    param_1[0x14] = iVar1;
    param_1[0x2b] = 0;
    param_1[0x16] = iVar1;
    param_1[0x2a] = 0;
    param_1[0x15] = iVar1;
    param_1[0x2e] = 0;
    param_1[8] = iVar1;
    param_1[6] = 0;
    param_1[0xb8] = 0;
    piVar3 = (int *)param_1[3];
    if (*piVar3 < 0) {
      uVar8 = piVar3[2] & 0xff000000U | uVar8 & 0xffffff;
    }
    piVar3[2] = uVar8;
    if (!bVar4) {
      param_1[0x11] = 0;
      return 1;
    }
  }
  return 0;
}

