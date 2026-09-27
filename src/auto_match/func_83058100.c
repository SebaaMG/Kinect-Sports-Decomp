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
extern int _blkmov();
extern int fn_8305B988();
extern int fn_8305BB28();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8217E368;
extern unsigned int lbl_8217E36C;


void fn_83058100(uint *param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  
  puVar4 = param_1 + 3;
  *(undefined4 *)(param_1[2] + 0xc) = lbl_8217E36C;
  iVar2 = fn_8305BB28((double)*param_1,puVar4);
  *(float *)(param_1[2] + 8) = (float)(longlong)iVar2;
  *(undefined4 *)(param_1[2] + 0x30) = lbl_8217E368;
  iVar2 = fn_8305B988((double)*param_1,puVar4);
  *(float *)(param_1[2] + 0x34) = (float)(longlong)iVar2;
  iVar2 = fn_8305B988((double)*param_1,puVar4);
  uVar1 = param_1[2];
  pfVar3 = (float *)(uVar1 + 0xe44);
  if (0 < iVar2) {
    *pfVar3 = lbl_82002AE0 / (float)(longlong)iVar2;
    _blkmov(uVar1 + 0xe48,pfVar3,iVar2 * 4 + -4);
  }
  return;
}

