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
extern int fn_828223C8();
extern int fn_82F672D8();


void fn_82826748(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int aiStack_30 [12];
  
  iVar1 = param_1 + 0x2f4;
  do {
    fn_828223C8(iVar1,aiStack_30);
    if (aiStack_30[0] == 0) {
      return;
    }
    iVar1 = aiStack_30[0];
  } while (*(char *)(aiStack_30[0] + 0x14) != *(char *)(param_2 + 0x28));
  if (*(int *)(aiStack_30[0] + 8) != 0) {
    fn_82F672D8(param_3,*(int *)(aiStack_30[0] + 8),param_4);
    *(undefined1 *)(param_3 + param_4 + -1) = 0;
  }
  return;
}

