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
extern int fn_8267BAF0();
extern int fn_826913D8();
extern unsigned int uRam00000000;


undefined4 fn_8267BF78(int param_1,int param_2)

{
  int *piVar1;
  char cVar3;
  undefined4 uVar2;
  int iVar4;
  
  iVar4 = param_1 + 0x2c4;
  RtlEnterCriticalSection(iVar4);
  cVar3 = fn_8267BAF0(param_1,param_2);
  uVar2 = uRam00000000;
  if (cVar3 == '\0') {
    RtlLeaveCriticalSection(iVar4);
  }
  else {
    param_2 = param_2 * 4;
    piVar1 = *(int **)(*(int *)(param_1 + 0x2e0) + param_2 + -4);
    (**(code **)(*piVar1 + 0x30))(piVar1,0);
    fn_826913D8(param_1 + 0x118,*(undefined4 *)(*(int *)(param_1 + 0x2e0) + param_2 + -4),0xb4
                     );
    *(undefined4 *)(*(int *)(param_1 + 0x2e0) + param_2 + -4) = 0;
    RtlLeaveCriticalSection(iVar4);
    uVar2 = 0;
  }
  return uVar2;
}

