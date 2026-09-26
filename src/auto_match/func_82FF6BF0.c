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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_3c;
extern int fn_82FF22B8();
extern int fn_82FF7EB0();
extern int fn_82FF8250();
extern unsigned int iStack_40;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


undefined8 fn_82FF6BF0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  for (piVar4 = *(int **)(param_1 + 4); (piVar4 != *(int **)(param_1 + 8) && (*piVar4 != param_2));
      piVar4 = piVar4 + 2) {
  }
  uVar2 = (uint)(*(int **)(param_1 + 8) != piVar4);
  puVar5 = (uint *)(-(uint)(uVar2 != 0) & (uint)(piVar4 + 1));
  if (puVar5 == (uint *)0x0) {
    uVar3 = 0x14;
  }
  else {
    uVar1 = *puVar5;
    iVar6 = uVar1 + 0x3c;
    uStack_38 = param_3;
    uStack_34 = param_4;
    fn_82FF7EB0(&iStack_40,iVar6,CONCAT44(param_3,param_4),-uVar2);
    if (iStack_40 != *(int *)(uVar1 + 0x40)) {
      fn_82FF22B8(auStack_3c,iVar6,&iStack_40);
    }
    if (param_5 != '\0') {
      uStack_38 = param_4;
      uStack_34 = param_3;
      fn_82FF8250((ulonglong)*puVar5 + 0x3c,CONCAT44(param_4,param_3));
    }
    uVar3 = 1;
  }
  return uVar3;
}

