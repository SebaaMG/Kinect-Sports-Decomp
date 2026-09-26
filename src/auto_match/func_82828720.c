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
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern int fn_82828380();
extern int fn_828291A0();
extern int fn_82829398();
extern int fn_82834458();
extern int fn_82F672D8();
extern unsigned int uStack_30;


ulonglong fn_82828720(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [256];
  undefined4 uStack_30;
  
  uVar3 = fn_82828380();
  if (uVar3 == 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    fn_82F672D8(auStack_130,param_2,0xff);
    uStack_30 = *(undefined4 *)(param_1 + 0x24);
    fn_828291A0(*(undefined4 **)(param_1 + 0x2ec),**(undefined4 **)(param_1 + 0x2ec),auStack_130
                   );
    uVar1 = *(undefined4 *)(param_1 + 0x2f0);
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x24);
    iVar2 = *(int *)(**(int **)(param_1 + 0x2ec) + 4);
    iVar4 = fn_82834458(uVar1);
    if ((int *)(iVar4 + 0xc) != (int *)0x0) {
      *(int *)(iVar4 + 0xc) = iVar2 + 8;
    }
    fn_82829398(auStack_140,uVar1,iVar4,0);
  }
  return uVar3;
}

