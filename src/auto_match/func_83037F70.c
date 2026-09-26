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
extern int fn_83037EB8();


int fn_83037F70(int *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = param_1[1] - *param_1 >> 3;
  if (((uVar1 < (uint)param_1[2]) || (cVar2 = fn_83037EB8(param_1,8), cVar2 != '\0')) &&
     (uVar1 < (uint)param_1[2])) {
    puVar4 = (undefined4 *)param_1[1];
    param_2 = param_2 * 8;
    param_1[1] = (int)(puVar4 + 2);
    if ((undefined4 *)(param_2 + *param_1) < puVar4) {
      do {
        puVar3 = puVar4 + -2;
        *puVar4 = puVar4[-2];
        puVar4[1] = puVar4[-1];
        puVar4 = puVar3;
      } while ((undefined4 *)(param_2 + *param_1) < puVar3);
    }
    param_2 = param_2 + *param_1;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

