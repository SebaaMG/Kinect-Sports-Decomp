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
extern int fn_828ED1A0();
extern int fn_82CE1408();


void fn_828EEA20(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,int param_6,int param_7)

{
  char cVar2;
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x53) = param_2;
  *(undefined1 *)((int)param_1 + 0x14d) = param_3;
  *(undefined1 *)((int)param_1 + 0x14e) = param_4;
  *(undefined1 *)((int)param_1 + 0x14f) = param_5;
  param_1[0x54] = param_6;
  param_1[0x55] = param_7;
  if ((((param_1[2] == 2) || (param_1[2] == 4)) && (cVar2 = fn_828ED1A0(param_1), cVar2 == '\0'))
     && ((((param_1[4] == 1 && (*(char *)(param_1 + 0x59) == '\0')) &&
          (*(char *)(param_1 + 0x78) == '\0')) &&
         (((*(char *)(param_1 + 0x53) != *(char *)((int)param_1 + 0x13a) ||
           (*(char *)((int)param_1 + 0x14d) != *(char *)((int)param_1 + 0x13b))) ||
          ((*(char *)((int)param_1 + 0x14e) != *(char *)(param_1 + 0x4f) ||
           (((*(char *)((int)param_1 + 0x14f) != *(char *)((int)param_1 + 0x13d) ||
             (param_1[0x54] != param_1[0x50])) || (param_1[0x55] != param_1[0x51])))))))))) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,param_1[0x50],param_1[0x54],param_1[0x51],param_1[0x55]);
    iVar1 = fn_82CE1408(param_1[0x16],
                              -(ulonglong)(*(char *)((int)param_1 + 0x139) != '\0') & 0x20 |
                              -(ulonglong)(*(char *)(param_1 + 0x4e) != '\0') & 8 |
                              -(ulonglong)(*(char *)((int)param_1 + 0x137) != '\0') & 4 |
                              -(ulonglong)(*(char *)((int)param_1 + 0x136) != '\0') & 2 |
                              -(ulonglong)(*(char *)((int)param_1 + 0x14e) != '\0') & 0x200 |
                              -(ulonglong)(*(char *)((int)param_1 + 0x14d) != '\0') & 0x100 |
                              -(ulonglong)(*(char *)(param_1 + 0x53) != '\0') & 0x10 |
                              -(ulonglong)(*(char *)((int)param_1 + 0x14f) != '\0') & 0x400 |
                              (ulonglong)(param_1[2] == 2),param_1[0x54],param_1[0x55],
                              param_1 + 0x5a);
    if (iVar1 == 0x3e5) {
      *(undefined1 *)(param_1 + 0x59) = 1;
      *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_1 + 0x53);
      *(undefined1 *)((int)param_1 + 0x159) = *(undefined1 *)((int)param_1 + 0x14d);
      *(undefined1 *)((int)param_1 + 0x15a) = *(undefined1 *)((int)param_1 + 0x14e);
      *(undefined1 *)((int)param_1 + 0x15b) = *(undefined1 *)((int)param_1 + 0x14f);
      param_1[0x57] = param_1[0x54];
      param_1[0x58] = param_1[0x55];
    }
    else {
      (**(code **)(*param_1 + 0x2c))(param_1);
    }
  }
  return;
}

