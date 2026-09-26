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
extern unsigned int *auStack_20;
extern int fn_82B82D28();
extern int fn_82B86A10();
extern int fn_82B86B80();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


int fn_82AD1400(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_30;
  int iStack_2c;
  int aiStack_28 [2];
  undefined1 auStack_20 [16];
  
  aiStack_28[0] = 0;
  iStack_2c = 4;
  uStack_30 = 0;
  if ((param_2[2] & 0x380000U) == 0) {
    for (puVar1 = (uint *)*param_2; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
      if ((*puVar1 & 0xe000000) != 0) goto LAB_82ad1438;
    }
  }
  else {
    puVar1 = (uint *)param_2[0xb];
LAB_82ad1438:
    fn_82B82D28(puVar1,0,&uStack_30,&iStack_2c,aiStack_28,0,0,0);
    if ((iStack_2c == 0) && (aiStack_28[0] == 0)) {
      return uStack_30;
    }
    if ((*(uint *)(uStack_30 + 8) & 0x3f80) == 16000) {
      if ((*(uint *)(param_1 + 0x28) & 0x4000) != 0) {
        return uStack_30;
      }
      fn_82B86B80(auStack_20,uStack_30);
      iVar2 = fn_82B86A10(param_1,1,auStack_20);
      return iVar2;
    }
  }
  return 0;
}

