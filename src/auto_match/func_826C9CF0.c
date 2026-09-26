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
extern int fn_82695608();
extern int fn_82696330();
extern int fn_826C98F8();


undefined8 fn_826C9CF0(int *param_1)

{
  bool bVar1;
  char cVar3;
  int iVar2;
  undefined8 uVar4;
  char acStack_30 [24];
  
  cVar3 = fn_826C98F8();
  if (cVar3 == '\0') {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  acStack_30[0] = '\0';
  cVar3 = (**(code **)(param_1[0x1a] + 0x2c))
                    (param_1 + 0x1a,iVar2 + 0x78,(ulonglong)*(uint *)(iVar2 + 0x78) + 0x1e8,
                     acStack_30);
  if (cVar3 != '\0') {
    if ((acStack_30[0] == '\0') || (bVar1 = false, acStack_30[0] == '\n')) {
      bVar1 = true;
    }
    if ((bVar1) || (cVar3 = fn_82695608(acStack_30,iVar2), cVar3 == '\0')) {
      uVar4 = 0;
      goto LAB_826c9d9c;
    }
  }
  uVar4 = 1;
LAB_826c9d9c:
  fn_82696330(acStack_30);
  return uVar4;
}

