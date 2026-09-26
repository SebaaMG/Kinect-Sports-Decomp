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
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_826F30F0();


int fn_826D7C00(int *param_1,int param_2)

{
  int iVar1;
  int aiStack_20 [4];
  
  if (*param_1 == 0) {
    iVar1 = param_1[1];
  }
  else {
    aiStack_20[0] = 0;
    aiStack_20[1] = 0;
    if ((*(char *)(param_2 + 0x28) == '\0') || (*(uint *)(param_2 + 4) <= (uint)param_1[1])) {
      fn_826F30F0(param_2,aiStack_20);
    }
    else {
      fn_82687F98(aiStack_20,
                        (ulonglong)*(uint *)(param_2 + 8) +
                        ((ulonglong)(uint)param_1[1] & 0x1fffffff) * 8);
    }
    iVar1 = aiStack_20[0];
    if (aiStack_20[0] != 0) {
      fn_82687270();
    }
  }
  return iVar1;
}

