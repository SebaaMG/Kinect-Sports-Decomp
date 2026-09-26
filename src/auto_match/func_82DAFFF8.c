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
extern unsigned int *auStack_28;
extern int fn_82CE5410();
extern int fn_82DAFBC0();
extern int fn_83081B28();


undefined8 fn_82DAFFF8(int param_1)

{
  int iVar1;
  int *piVar3;
  undefined8 uVar2;
  int aiStack_30 [2];
  undefined1 auStack_28 [16];
  
  iVar1 = *(int *)(param_1 + 0x4c);
  piVar3 = (int *)fn_82CE5410();
  aiStack_30[0] = *piVar3;
  *piVar3 = (iVar1 * 4 + 0x7fU & 0xffffff80) + aiStack_30[0];
  fn_83081B28(auStack_28,aiStack_30,*(undefined4 *)(param_1 + 0x4c));
  uVar2 = fn_82DAFBC0(param_1,auStack_28);
  iVar1 = aiStack_30[0];
  piVar3 = (int *)fn_82CE5410();
  *piVar3 = iVar1;
  return uVar2;
}

