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
extern unsigned int *auStack_1c;
extern int fn_82F6A3E8();
extern unsigned int uStack_20;


undefined8 fn_826F5C10(char *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  cVar1 = *param_1;
  if ((cVar1 < '0') || ('9' < cVar1)) {
    if (cVar1 == '_') {
      if (param_3 == '\0') {
        if (((((param_1[1] == 'l') || (param_1[1] == 'L')) &&
             ((param_1[2] == 'e' || (param_1[2] == 'E')))) &&
            (((param_1[3] == 'v' || (param_1[3] == 'V')) &&
             ((param_1[4] == 'e' || (param_1[4] == 'E')))))) &&
           ((param_1[5] == 'l' || (param_1[5] == 'L')))) goto LAB_826f5d38;
      }
      else if (((param_1[1] == 'l') &&
               (((param_1[2] == 'e' && (param_1[3] == 'v')) && (param_1[4] == 'e')))) &&
              (param_1[5] == 'l')) {
LAB_826f5d38:
        cVar1 = param_1[6];
        if (('/' < cVar1) && (cVar1 < ':')) {
          auStack_1c[0] = 0;
          uVar2 = fn_82F6A3E8(param_1 + 6,auStack_1c,10);
          uStack_20 = auStack_1c[0];
          goto LAB_826f5c54;
        }
      }
    }
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uStack_20 = 0;
    uVar2 = fn_82F6A3E8(param_1,&uStack_20,10);
LAB_826f5c54:
    *param_2 = uStack_20;
  }
  return uVar2;
}

