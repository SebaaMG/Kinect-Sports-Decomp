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
extern int fn_829DAE58();


undefined8 fn_829DAEB8(int *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  char *apcStack_30 [12];
  
  *param_1 = 0;
  apcStack_30[0] = (char *)0x0;
  cVar1 = fn_829DAE58(param_1 + 1,param_2,apcStack_30);
  if (((cVar1 != '\0') && (cVar1 = fn_829DAE58(param_1 + 2,0,apcStack_30), cVar1 != '\0')) &&
     (cVar1 = fn_829DAE58(param_1 + 3,0,apcStack_30), cVar1 != '\0')) {
    piVar3 = param_1 + 4;
    uVar2 = 1;
    *param_1 = *param_1 + 1;
    do {
      cVar1 = fn_829DAE58(piVar3,0,apcStack_30);
      if (cVar1 == '\0') {
        return 0xffffffff80004005;
      }
      cVar1 = fn_829DAE58(piVar3 + 1,0,apcStack_30);
      if (cVar1 == '\0') {
        return 0xffffffff80004005;
      }
      cVar1 = fn_829DAE58(piVar3 + 2,0,apcStack_30);
      if (cVar1 == '\0') {
        return 0xffffffff80004005;
      }
      *param_1 = *param_1 + 1;
      if ((apcStack_30[0] != (char *)0x0) && (*apcStack_30[0] == '\0')) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar2 < 10);
  }
  return 0xffffffff80004005;
}

