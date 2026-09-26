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
extern int fn_827BB5D0();
extern int fn_827BB6B8();
extern int fn_827BBB00();
extern int fn_827BBEB0();
extern int fn_827BC248();
extern int fn_827BC550();
extern int fn_827BCEC0();
extern int fn_827BCFC0();
extern int fn_827BD100();


undefined8 fn_827BD1E0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  do {
    if (param_1[0x5f] == 0) {
      if (*(char *)(param_1[0x65] + 0xc) == '\0') {
        cVar3 = fn_827BD100();
      }
      else {
        cVar3 = fn_827BCFC0(param_1);
      }
      if (cVar3 == '\0') {
        return 0;
      }
    }
    iVar1 = param_1[0x5f];
    if (iVar1 < 0xd0) {
      if (iVar1 < 0xcd) {
        if (200 < iVar1) {
          if (iVar1 == 0xc9) {
            uVar5 = 1;
LAB_827bd2a8:
            uVar4 = 0;
          }
          else {
            if (iVar1 != 0xca) {
              if (iVar1 != 0xcb) {
                if (iVar1 == 0xcc) goto LAB_827bd2d0;
                goto LAB_827bd35c;
              }
              goto LAB_827bd2f8;
            }
            uVar5 = 1;
LAB_827bd294:
            uVar4 = 1;
          }
          cVar3 = fn_827BB6B8(param_1,uVar4,uVar5);
          goto LAB_827bd2d8;
        }
        if (0xc4 < iVar1) goto LAB_827bd2f8;
        if (iVar1 != 1) {
          if (0xbf < iVar1) {
            if (iVar1 < 0xc2) {
              uVar5 = 0;
              goto LAB_827bd2a8;
            }
            if (iVar1 == 0xc2) {
              uVar5 = 0;
              goto LAB_827bd294;
            }
            if (iVar1 == 0xc3) goto LAB_827bd2f8;
            if (iVar1 == 0xc4) {
              cVar3 = fn_827BBEB0(param_1);
              goto LAB_827bd2d8;
            }
          }
          goto LAB_827bd35c;
        }
LAB_827bd370:
        *(undefined4 *)(*param_1 + 0x14) = 0x5c;
        *(int *)(*param_1 + 0x18) = param_1[0x5f];
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      else {
LAB_827bd2f8:
        uVar6 = 0x3c;
LAB_827bd2fc:
        *(undefined4 *)(*param_1 + 0x14) = uVar6;
        *(int *)(*param_1 + 0x18) = param_1[0x5f];
        (**(code **)*param_1)(param_1);
      }
    }
    else {
      if (iVar1 < 0xdc) {
        if (iVar1 != 0xdb) {
          if (0xcf < iVar1) {
            if (iVar1 < 0xd8) goto LAB_827bd370;
            if (iVar1 == 0xd8) {
              cVar3 = fn_827BB5D0(param_1);
              goto LAB_827bd2d8;
            }
            if (iVar1 == 0xd9) {
              *(undefined4 *)(*param_1 + 0x14) = 0x55;
              (**(code **)(*param_1 + 4))(param_1,1);
              uVar5 = 2;
LAB_827bd424:
              param_1[0x5f] = 0;
              return uVar5;
            }
            if (iVar1 == 0xda) {
              cVar3 = fn_827BBB00(param_1);
              if (cVar3 == '\0') {
                return 0;
              }
              uVar5 = 1;
              goto LAB_827bd424;
            }
          }
          goto LAB_827bd35c;
        }
        cVar3 = fn_827BC248(param_1);
      }
      else if (iVar1 == 0xdc) {
LAB_827bd2d0:
        cVar3 = fn_827BCEC0(param_1);
      }
      else if (iVar1 == 0xdd) {
        cVar3 = fn_827BC550(param_1);
      }
      else {
        if (iVar1 < 0xe0) {
LAB_827bd35c:
          uVar6 = 0x44;
          goto LAB_827bd2fc;
        }
        if (iVar1 < 0xf0) {
          pcVar2 = *(code **)((iVar1 + -0xd9) * 4 + param_1[0x65]);
        }
        else {
          if (iVar1 != 0xfe) goto LAB_827bd35c;
          pcVar2 = *(code **)(param_1[0x65] + 0x18);
        }
        cVar3 = (*pcVar2)(param_1);
      }
LAB_827bd2d8:
      if (cVar3 == '\0') {
        return 0;
      }
    }
    param_1[0x5f] = 0;
  } while( true );
}

