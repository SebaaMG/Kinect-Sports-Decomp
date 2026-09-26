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
extern int fn_8267D7C8();
extern int fn_8267EC58();
extern int fn_8267ECD0();
extern int fn_82A2A618();
extern int fn_82A2A790();


void fn_8267D9C0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int aiStack_20 [2];
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  aiStack_20[0] = 0;
  puVar2[2] = puVar2[2] + -1;
  iVar1 = puVar2[2];
  fn_8267D7C8(param_1,aiStack_20);
  if (*(char *)(puVar2 + 1) == '\0') {
    iVar4 = fn_82A2A618(*puVar2,1,0);
  }
  else {
    iVar4 = fn_82A2A790();
  }
  iVar3 = aiStack_20[0];
  if ((iVar4 != 0) && (iVar1 == 0)) {
    if (aiStack_20[0] == 0) {
      return;
    }
    fn_8267ECD0(aiStack_20[0]);
  }
  if (iVar3 != 0) {
    fn_8267EC58(iVar3);
  }
  return;
}

