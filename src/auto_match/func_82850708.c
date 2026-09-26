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
extern int fn_82817B08();
extern int fn_82817B50();
extern int fn_82851858();
extern unsigned int uStack_30;


undefined8 fn_82850708(int param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  if (*(int *)(param_1 + 0x144) != 0) {
    iVar1 = fn_82817B08();
    if ((-1 < (int)param_3) && ((int)param_3 < iVar1)) {
      fn_82817B50(*(undefined4 *)(param_1 + 0x144),param_3,&uStack_30);
      fn_82851858(uStack_30,aiStack_2c);
      *param_4 = *(undefined4 *)(aiStack_2c[0] + param_2);
      return 1;
    }
  }
  return 0;
}

