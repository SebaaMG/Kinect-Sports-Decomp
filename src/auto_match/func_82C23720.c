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
extern int fn_82C10F40();
extern unsigned int iStack_40;


ulonglong fn_82C23720(int param_1,undefined8 param_2,undefined2 *param_3,undefined2 *param_4,
                       undefined4 *param_5)

{
  int iVar1;
  int iVar3;
  ulonglong uVar2;
  int iStack_40;
  int aiStack_3c [15];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *param_3 = 0xffff;
  *param_4 = 0;
  *param_5 = 0;
  aiStack_3c[0] = 0;
  iStack_40 = 0;
  iVar3 = fn_82C10F40(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x7c),param_2,&iStack_40);
  if (iVar3 != -0x7fafffea) {
    *param_5 = *(undefined4 *)(iStack_40 + 0x18);
    uVar2 = fn_82C10F40(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x80),param_2,aiStack_3c);
    if ((uVar2 & 0xffffffff) != 0x80500016) {
      *param_3 = *(undefined2 *)(aiStack_3c[0] + 0x54);
      *param_4 = *(undefined2 *)(aiStack_3c[0] + 0x56);
      return uVar2;
    }
  }
  return 0;
}

